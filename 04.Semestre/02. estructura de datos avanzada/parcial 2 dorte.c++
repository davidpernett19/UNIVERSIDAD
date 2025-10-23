#include <iostream>
using namespace std;

/* Nodo de la cola */
struct nodo {
    int nro;
    nodo* sgte;
};

/* Cola con punteros a frente y final */
struct cola {
    nodo* delante;
    nodo* atras;
};

/* Encolar elemento */
void encolar(cola &q, int valor) {
    nodo* aux = new nodo;
    aux->nro = valor;
    aux->sgte = NULL;

    if (q.delante == NULL) {
        q.delante = aux;         // primer elemento
        q.atras   = aux;
    } else {
        q.atras->sgte = aux;
        q.atras = aux;           // siempre apunta al último
    }
}

/* Desencolar elemento (seguro) */
bool desencolar(cola &q, int &num) {
    if (q.delante == NULL) return false;   // cola vacía

    nodo* aux = q.delante;                 // inicio de la cola
    num = aux->nro;
    q.delante = q.delante->sgte;
    delete aux;

    if (q.delante == NULL) q.atras = NULL; // quedó vacía, sincronizar
    return true;
}

/* Mostrar Cola */
void muestraCola(const cola &q) {
    nodo* aux = q.delante;
    while (aux != NULL) {
        cout << "   " << aux->nro;
        aux = aux->sgte;
    }
}

/* Vaciar Cola (liberar nodos) */
void vaciaCola(cola &q) {
    nodo* aux;
    while (q.delante != NULL) {
        aux = q.delante;
        q.delante = aux->sgte;
        delete aux;
    }
    q.delante = NULL;
    q.atras   = NULL;
}

/* === NUEVAS FUNCIONES PEDIDAS === */

/* 1) Llenar la cola con N elementos */
void llenarCola(cola &q, int cantidad) {
    for (int i = 1; i <= cantidad; ++i) {
        int valor;
        cout << "  Ingrese valor #" << i << ": ";
        while (!(cin >> valor)) {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "  Entrada invalida. Intente de nuevo: ";
        }
        encolar(q, valor);
    }
    cout << "\n  Se encolaron " << cantidad << " elemento(s).\n";
}

/* 2) Ver el proximo elemento que saldria*/
bool proximo(const cola &q, int &out) {
    if (q.delante == NULL) return false;
    out = q.delante->nro;
    return true;
}

/* 3) Destruir la cola*/
void destruirCola(cola &q) {
    vaciaCola(q); // en esta implementacion destruir = vaciar
}

/* Menu */
void menu() {
    cout << "\n\t IMPLEMENTACION DE COLAS EN C++\n\n";
    cout << " 1. ENCOLAR\n";
    cout << " 2. DESENCOLAR\n";
    cout << " 3. MOSTRAR COLA\n";
    cout << " 4. VACIAR COLA\n";
    cout << " 5. LLENAR COLA\n";
    cout << " 6. PROXIMO EN SALIR\n";
    cout << " 7. DESTRUIR COLA\n";
    cout << " 8. SALIR\n";
    cout << "\n INGRESE OPCION: ";
}

/* Main */
int main() {
    cola q;
    q.delante = NULL;
    q.atras   = NULL;

    int op;            // opcion del menu
    system("color 4f"); // (Windows)

    do {
        menu();
        if (!(cin >> op)) { cin.clear(); cin.ignore(1024, '\n'); op = 0; }

        switch (op) {
            case 1: {
                cout << "\n NUMERO A ENCOLAR: ";
                int dato;
                if (cin >> dato) {
                    encolar(q, dato);
                    cout << "\n\tNumero " << dato << " encolado...\n\n";
                } else {
                    cin.clear(); cin.ignore(1024, '\n');
                    cout << "\n\tEntrada invalida.\n\n";
                }
                break;
            }
            case 2: {
                int x;
                if (desencolar(q, x)) {
                    cout << "\n\tNumero " << x << " desencolado...\n\n";
                } else {
                    cout << "\n\tCola vacia...\n\n";
                }
                break;
            }
            case 3: {
                cout << "\n\n MOSTRANDO COLA\n\n";
                if (q.delante != NULL) muestraCola(q);
                else cout << "\n\tCola vacia...!";
                cout << "\n";
                break;
            }
            case 4: {
                vaciaCola(q);
                cout << "\n\tHecho (cola vaciada)...\n\n";
                break;
            }
            case 5: {
                cout << "\n Cantidad de elementos a encolar: ";
                int n;
                if (cin >> n && n >= 0) {
                    llenarCola(q, n);
                } else {
                    cin.clear(); cin.ignore(1024, '\n');
                    cout << "\n\tCantidad invalida.\n\n";
                }
                break;
            }
            case 6: {
                int frente;
                if (proximo(q, frente)) {
                    cout << "\n\tProximo en salir: " << frente << "\n\n";
                } else {
                    cout << "\n\tCola vacia...\n\n";
                }
                break;
            }
            case 7: {
                destruirCola(q);
                cout << "\n\tCola destruida (liberada y en estado nulo).\n\n";
                break;
            }
            default:
                break;
        }

        cout << endl << endl;
        system("pause");  system("cls"); // (Windows)

    } while (op != 8);

    destruirCola(q); // limpieza final defensiva
    return 0;
}