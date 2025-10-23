#include <iostream>
#include <cmath> // Para funciones matemáticas como pow
using namespace std;

// Definimos una estructura para las medidas de las figuras
struct Medidas {
    double base;
    double altura;
    double radio;
    double lado;
};

// Procedimiento para mostrar el menú
void mostrarMenu() {
    cout << "         Por favor escoja la figura geometrica a la cual le quiere calcular el area          " << endl << endl;
    cout << "1. CIRCULO" << endl;
    cout << "2. CUADRADO" << endl;
    cout << "3. RECTANGULO" << endl;
    cout << "4. TRIANGULO" << endl;
    cout << endl << "Ingrese su opcion: ";
}

// FUNCION PARA EL AREA DEL CIRCULO
double areaCirculo(Medidas m) {
    return 3.1416 * pow(m.radio, 2);
}

// FUNCION PARA EL AREA DEL CUADRARDO
double areaCuadrado(Medidas m) {
    return pow(m.lado, 2);
}

// FUNCION PARA EL AREA DEL RECTANGULO 
double areaRectangulo(Medidas m) {
    return m.base * m.altura;
}

// FUNCION PARA EL AREA DEL TRIANGULO
double areaTriangulo(Medidas m) {
    return (m.base * m.altura) / 2;
}

// CALCULO SEGUN LA FIGURA QUE ESCOJA EL USUARIO
void calcularArea(int figura) {
    Medidas m;
    double area;

    switch (figura) {
        case 1:
            cout << "Ingrese el radio del circulo: ";
            cin >> m.radio;
            area = areaCirculo(m); // FUNCION CIRCULO
            cout << "El area del circulo es: " << area << endl;
            break;

        case 2:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> m.lado;
            area = areaCuadrado(m); // FUNCION CUADRADO
            cout << "El area del cuadrado es: " << area << endl;
            break;

        case 3:
            cout << "Ingrese la base del rectangulo: ";
            cin >> m.base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> m.altura;
            area = areaRectangulo(m); // FUNCION RECTANGULO
            cout << "El area del rectangulo es: " << area << endl;
            break;

        case 4:
            cout << "Ingrese la base del triangulo: ";
            cin >> m.base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> m.altura;
            area = areaTriangulo(m); // FUNCION TRIANGULO
            cout << "El area del triangulo es: " << area << endl;
            break;
        default:
            cout << "Usted ingreso un numero invalido." << endl;
    }
}

int main() {
    int figura;

    // Mostrar el menú
    mostrarMenu();
    cin >> figura;

    // Calcular el área según la figura elegida
    calcularArea(figura);

    return 0;
}
