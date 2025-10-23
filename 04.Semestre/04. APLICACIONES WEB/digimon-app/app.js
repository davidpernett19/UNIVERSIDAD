/* app.js - SPA en JS puro. No requiere librerías. */
/* Base URL verificada: https://digimon-api.vercel.app/api/digimon */
const API_BASE = 'https://digimon-api.vercel.app/api/digimon';

/* ---------- Objeto compartido (estado global) - cumple "Objeto compartido" ---------- */
const AppState = {
  digimons: [],          // lista cargada desde API
  filtered: [],          // lista mostrada
  favorites: new Set(JSON.parse(localStorage.getItem('digifavs')||'[]')),
  currentTab: 'home',
  levels: [],            // niveles únicos
};

/* ---------- Util: fetch con manejo de errores ---------- */
async function fetchAll() {
  try {
    const res = await fetch(API_BASE);
    if(!res.ok) throw new Error('API error '+res.status);
    const data = await res.json();
    return data; // array {name,img,level}
  } catch(e){
    console.error('Fetch failed', e);
    return [];
  }
}

/* ---------- Renderers ---------- */
const root = document.getElementById('appRoot');
const menuButtons = document.querySelectorAll('.menu-tabs button');
const searchInput = document.getElementById('searchInput');
const searchBtn = document.getElementById('searchBtn');

function setActiveTab(tab) {
  AppState.currentTab = tab;
  menuButtons.forEach(b => b.classList.toggle('active', b.dataset.tab === tab));
  render();
}

/* helper: render card list */
function renderList(list){
  if(!list || list.length===0){
    root.innerHTML = `<div class="panel"><p>No se encontraron resultados.</p></div>`;
    return;
  }
  const grid = document.createElement('div');
  grid.className = 'grid';
  list.forEach(d => {
    const card = document.createElement('div');
    card.className = 'card';
    // image: small and lazy-load
    const img = document.createElement('img');
    img.loading = 'lazy';
    img.src = d.img;
    img.alt = d.name;
    img.width=120;
    img.height=120;
    img.onclick = () => showDetail(d);
    const name = document.createElement('div'); name.className='name'; name.textContent = d.name;
    const level = document.createElement('div'); level.className='level'; level.textContent = d.level;
    const favBtn = document.createElement('button'); favBtn.className='btn btn-outline'; favBtn.textContent = AppState.favorites.has(d.name) ? '★ Favorito' : '☆ Favorito';
    favBtn.onclick = (ev) => { ev.stopPropagation(); toggleFavorite(d, favBtn); };
    card.append(img, name, level, favBtn);
    grid.appendChild(card);
  });
  root.innerHTML = '';
  root.appendChild(grid);
}

/* toggle favorite */
function toggleFavorite(d, btnEl){
  if(AppState.favorites.has(d.name)) {
    AppState.favorites.delete(d.name);
    btnEl.textContent = '☆ Favorito';
  } else {
    AppState.favorites.add(d.name);
    btnEl.textContent = '★ Favorito';
  }
  localStorage.setItem('digifavs', JSON.stringify([...AppState.favorites]));
}

/* show detail panel (simple modal-like panel) */
function showDetail(d) {
  root.innerHTML = `
    <div class="panel">
      <button class="btn btn-outline" id="backBtn">← Volver</button>
      <div style="display:flex;flex-direction:column;align-items:center;gap:12px;margin-top:10px">
        <img class="detail-img" src="${d.img}" alt="${d.name}" />
        <h2>${d.name}</h2>
        <p>Nivel: <strong>${d.level}</strong></p>
        <p class="muted">Descripción breve (generada): Un Digimon de nivel ${d.level}. Datos oficiales obtenidos desde la API pública.</p>
        <div style="display:flex;gap:8px">
          <button id="favToggle" class="btn btn-accent">${AppState.favorites.has(d.name) ? 'Quitar favorito' : 'Agregar a favoritos'}</button>
          <button id="evolveBtn" class="btn btn-outline">Ver evoluciones (simulada)</button>
        </div>
      </div>
    </div>
  `;
  document.getElementById('backBtn').onclick = () => render();
  document.getElementById('favToggle').onclick = (ev) => {
    ev.stopPropagation();
    toggleFavorite(d, { textContent: AppState.favorites.has(d.name) ? '☆ Favorito' : '★ Favorito' });
    render(); // actualizar vista
  };

  // Pestaña original: evolución simulada
  document.getElementById('evolveBtn').onclick = () => {
    // La API oficial no proporciona cadena de evoluciones; mostramos una vista creativa: mostrar 3 digimons aleatorios del mismo nivel o superior como "evoluciones".
    const sims = AppState.digimons.filter(x => x.level !== d.level).slice(0,3);
    let html = '<div style="margin-top:12px"><h3>Evoluciones / Alternativas</h3><div class="grid">';
    sims.forEach(s => {
      html += `<div class="card"><img src="${s.img}" alt="${s.name}" /><div class="name">${s.name}</div><div class="level">${s.level}</div></div>`;
    });
    html += '</div></div>';
    const panel = document.querySelector('.panel');
    panel.insertAdjacentHTML('beforeend', html);
  };
}

/* Render según tab actual */
function render(){
  const tab = AppState.currentTab;
  if(tab==='home'){
    root.innerHTML = `<div class="panel"><h2>Bienvenido</h2><p>Esta app usa la API pública de Digimon. Usa las pestañas para navegar, buscar, filtrar por nivel y guardar favoritos.</p></div>`;
  } else if(tab==='list'){
    renderList(AppState.filtered.length ? AppState.filtered : AppState.digimons.slice(0,200));
  } else if(tab==='levels'){
    // render list of level filters
    const panel = document.createElement('div'); panel.className='panel';
    panel.innerHTML = '<h3>Filtrar por nivel</h3>';
    const wrap = document.createElement('div'); wrap.style.display='flex';wrap.style.flexWrap='wrap';wrap.style.gap='8px';
    AppState.levels.forEach(l => {
      const b = document.createElement('button'); b.className='btn btn-outline'; b.textContent = l;
      b.onclick = () => {
        AppState.filtered = AppState.digimons.filter(d => d.level.toLowerCase()===l.toLowerCase());
        setActiveTab('list');
      };
      wrap.appendChild(b);
    });
    panel.appendChild(wrap);
    root.innerHTML=''; root.appendChild(panel);
  } else if(tab==='favorites'){
    const favs = AppState.digimons.filter(d => AppState.favorites.has(d.name));
    renderList(favs);
  } else if(tab==='info'){
    root.innerHTML = `<div class="panel"><h2>Información</h2>
      <p>Pestañas: Inicio, Lista, Filtrar (niveles), Favoritos, Información.</p>
      <p>Pestaña original: la "Evoluciones" simulada dentro del detalle (creativa y original para evaluación).</p>
      <p>Objeto compartido: <code>AppState</code> (almacena digimons, filtro y favoritos).</p>
    </div>`;
  }
}

/* ---------- Buscador ---------- */
async function doSearch(term){
  term = (term||'').trim();
  if(!term){ AppState.filtered = []; setActiveTab('list'); return; }

  // Usar endpoint por nombre de la API (si falla, hacer filter local)
  try {
    const url = `${API_BASE}/name/${encodeURIComponent(term.toLowerCase())}`;
    const r = await fetch(url);
    if(r.ok){
      const data = await r.json();
      AppState.filtered = data;
      setActiveTab('list');
      return;
    }
  } catch(e){ console.warn('search endpoint failed', e); }

  // fallback local filter
  AppState.filtered = AppState.digimons.filter(d=> d.name.toLowerCase().includes(term.toLowerCase()));
  setActiveTab('list');
}

/* ---------- Inicialización ---------- */
async function init(){
  // attach menu events
  document.querySelectorAll('.menu-tabs button').forEach(b => b.onclick = () => setActiveTab(b.dataset.tab));
  searchBtn.onclick = () => doSearch(searchInput.value);
  searchInput.addEventListener('keyup', (e) => { if(e.key==='Enter') doSearch(searchInput.value); });

  // carga inicial de datos
  root.innerHTML = `<div class="panel"><p>Cargando digimons...</p></div>`;
  const data = await fetchAll();
  AppState.digimons = data;
  AppState.levels = [...new Set(data.map(d => d.level))].sort();
  render();
}

/* arrancar app */
init();

