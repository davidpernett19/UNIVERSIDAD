
// ===== MODALES ===== //
const MODAL_REGISTRO = document.getElementById('modal-registro');
const MODAL_LOGIN = document.getElementById('modal-login');

// Solo un manejador para todos los modales
document.querySelectorAll('[data-open-modal]').forEach(button => {
  button.addEventListener('click', (e) => {
    e.preventDefault();
    const modalId = button.getAttribute('data-open-modal');
    const modal = document.getElementById(modalId);
    if (modal) {
      modal.style.display = 'block';
    }
  });
});

// ===== SISTEMA DE USUARIOS ===== //
let usuarios = JSON.parse(localStorage.getItem('usuarios')) || [];
let usuarioActivo = JSON.parse(localStorage.getItem('usuarioActivo'));

// Registro
document.getElementById('form-registro')?.addEventListener('submit', function (e) {
  e.preventDefault();
  const nombre = document.getElementById('nombre').value.trim();
  const correo = document.getElementById('correo').value.trim();
  const contrasena = document.getElementById('contrasena').value;

  const nuevoUsuario = { id: Date.now(), nombre, correo, contrasena };
  usuarios.push(nuevoUsuario);
  localStorage.setItem('usuarios', JSON.stringify(usuarios));
  iniciarSesion(nuevoUsuario);
});

// Login
document.getElementById('form-login')?.addEventListener('submit', function (e) {
  e.preventDefault();
  const correo = document.getElementById('login-correo').value.trim();
  const contrasena = document.getElementById('login-contrasena').value;

  const usuario = usuarios.find(u => u.correo === correo && u.contrasena === contrasena);
  if (usuario) {
    iniciarSesion(usuario);
  } else {
    document.getElementById('mensaje-login').textContent = "Credenciales incorrectas";
  }
});

function iniciarSesion(usuario) {
  usuarioActivo = { id: usuario.id, nombre: usuario.nombre };
  localStorage.setItem('usuarioActivo', JSON.stringify(usuarioActivo));
  actualizarUI();
  cerrarModales();
}

function cerrarSesion() {
  localStorage.removeItem('usuarioActivo');
  usuarioActivo = null;
  actualizarUI();
}

function cerrarModales() {
  document.querySelectorAll('.modal').forEach(modal => modal.style.display = 'none');
}

// ===== INTERFAZ ===== //
function actualizarUI() {
  const formReseña = document.querySelector('.reseña-form');
  const intro = document.querySelector('.intro');

  document.querySelectorAll('[data-auth]').forEach(el => el.style.display = usuarioActivo ? 'block' : 'none');
  document.querySelectorAll('[data-no-auth]').forEach(el => el.style.display = usuarioActivo ? 'none' : 'block');

  if (formReseña) {
    formReseña.style.display = usuarioActivo ? 'block' : 'none';
  }

  const userBadge = document.querySelector('.user-badge');
  if (usuarioActivo && userBadge) {
    userBadge.innerHTML = `👤 ${usuarioActivo.nombre} <button id="cerrar-sesion">Cerrar sesión</button>`;
    document.getElementById('cerrar-sesion').addEventListener('click', cerrarSesion);
  } else if (userBadge) {
    userBadge.innerHTML = '';
  }

  if (usuarioActivo) {
    reemplazarIntroSiAutenticado();
  } else if (intro && contenidoOriginalIntro !== null) {
    intro.innerHTML = contenidoOriginalIntro; // Restaurar contenido original al cerrar sesión
  }
}

function reemplazarIntroSiAutenticado() {
  const intro = document.querySelector(".intro");
  if (!intro || !usuarioActivo) return;

  intro.innerHTML = `
    <h1>Enlista tus juegos favoritos</h1>
    <p>Haz tu propia lista de títulos</p>
    <button id="BotonList">Listar</button>
  `;
}

// ===== RESEÑAS ===== //
document.getElementById('form-reseña')?.addEventListener('submit', function (e) {
  e.preventDefault();
  if (!usuarioActivo) {
    alert("Debes iniciar sesión para enviar una reseña.");
    document.getElementById('modal-login').style.display = 'block';
    return;
  }

  const nuevaReseña = {
    usuarioId: usuarioActivo.id,
    juego: document.getElementById('juego-reseña').value,
    puntuacion: document.getElementById('puntuacion').value,
    comentario: document.getElementById('comentario').value,
    fecha: new Date().toLocaleDateString()
  };

  let reseñas = JSON.parse(localStorage.getItem('reseñas')) || [];
  reseñas.push(nuevaReseña);
  localStorage.setItem('reseñas', JSON.stringify(reseñas));

  this.reset();
  mostrarReseñas();
});

function mostrarReseñas() {
  const contenedor = document.getElementById('lista-reseñas');
  if (!contenedor) return;

  const reseñas = JSON.parse(localStorage.getItem('reseñas')) || [];
  contenedor.innerHTML = '';

  reseñas.forEach(r => {
    const div = document.createElement('div');
    div.className = 'reseña';
    div.innerHTML = `
      <h3>${r.juego}</h3>
      <p class="puntuacion">Puntuación: ${r.puntuacion}/10</p>
      <p>${r.comentario}</p>
      <p><em>${r.fecha}</em></p>
    `;
    contenedor.appendChild(div);
  });
}

// Cierre de modales
document.querySelectorAll('.cerrar').forEach(button => {
  button.addEventListener('click', () => {
    button.closest('.modal').style.display = 'none';
  });
});
window.addEventListener('click', (e) => {
  if (e.target.classList.contains('modal')) {
    e.target.style.display = 'none';
  }
});
let contenidoOriginalIntro = null;
document.addEventListener('DOMContentLoaded', () => {
  const intro = document.querySelector('.intro');
  if (intro) {
    contenidoOriginalIntro = intro.innerHTML; // Guardar el contenido original al cargar la página
  }
  actualizarUI();
  mostrarReseñas();
});

function actualizarValoraciones() {
  const reseñas = JSON.parse(localStorage.getItem('reseñas')) || [];
  const contadores = {};

  // Agrupar puntuaciones por juego
  reseñas.forEach(({ juego, puntuacion }) => {
    if (!contadores[juego]) contadores[juego] = [];
    contadores[juego].push(Number(puntuacion));
  });

  // Calcular promedio y actualizar los elementos en pantalla
  document.querySelectorAll('.puntuacion[data-juego]').forEach(elem => {
    const juego = elem.getAttribute('data-juego');
    const puntos = contadores[juego];

    if (puntos && puntos.length > 0) {
      const promedio = (puntos.reduce((a, b) => a + b, 0) / puntos.length).toFixed(1);
      elem.textContent = promedio;
    } else {
      elem.textContent = '--';
    }
  });
}


function mostrarReseñas() {
  const contenedor = document.getElementById('lista-reseñas');
  if (!contenedor) return;

  const reseñas = JSON.parse(localStorage.getItem('reseñas')) || [];
  contenedor.innerHTML = '';

  reseñas.forEach(r => {
    const div = document.createElement('div');
    div.className = 'reseña';
    div.innerHTML = `
      <h3>${r.juego}</h3>
      <p class="puntuacion">Puntuación: ${r.puntuacion}/10</p>
      <p>${r.comentario}</p>
      <p><em>${r.fecha}</em></p>
    `;
    contenedor.appendChild(div);
  });

  actualizarValoraciones(); // 🔥 Aquí se actualizan las puntuaciones promedio
}


document.querySelectorAll('.plataformas li').forEach(li => {
  li.addEventListener('click', () => {
    const plataforma = li.textContent.trim();
    filtrarPorPlataforma(plataforma);
  });
});

function filtrarPorPlataforma(plataformaSeleccionada) {
  document.querySelectorAll('.valoradas .tarjeta').forEach(tarjeta => {
    const plataformas = tarjeta.getAttribute('data-plataformas') || '';
    const coincide = plataformas.split(',').map(p => p.trim()).includes(plataformaSeleccionada);
    tarjeta.style.display = coincide ? 'flex' : 'none';
  });
}


document.querySelectorAll('.plataformas li').forEach(li => {
  li.addEventListener('click', () => {
    const plataforma = li.textContent.trim();

    if (plataforma === "Mostrar todos") {
      document.querySelectorAll('.valoradas .tarjeta').forEach(t => t.style.display = 'flex');
    } else {
      filtrarPorPlataforma(plataforma);
    }
  });
});
