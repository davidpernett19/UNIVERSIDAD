#include <iostream>
#include <cmath> // ESTO SE USA PARA LA POTENCIA
using namespace std;

// AQUI VOY A DEFINIR LOS VALORES PARA CADA UNO DE LAS FIGURAS NECESARIAS
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
    cout << "5. POLIGONO IRREGULAR" << endl;
    cout << endl << "Ingrese su opcion: ";
}

// AREA DEL CIRCULO
double areaCirculo(Medidas m) {
    return 3.1416 * pow(m.radio, 2);
    
}
// AREA CUADRADO
double areaCuadrado(Medidas m) {
    return pow(m.lado, 2);
}
// AREA RECTANGULO
double areaRectangulo(Medidas m) {
    return m.base * m.altura;
}
// AREA DE TRIANGULO
double areaTriangulo(Medidas m) {
    return (m.base * m.altura) / 2;
}
// OPCIONES DE CALCULO DEL AREA SEGUN EL USUARIO ESCOJA
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

        case 5:
            cout<<""<<endl; 
            break;

        default:
            cout << "Usted ingreso un numero invalido." << endl;
    }
}

int main() {
    int figura;

    // MMOSTRAR EL MENU
    mostrarMenu();
    cin >> figura;

    // CALCULAR EL AREA DEPENDE DE FIGURA
    calcularArea(figura);

    return 0;
}
