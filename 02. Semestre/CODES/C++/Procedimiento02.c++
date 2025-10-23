#include <iostream>
using namespace std;

void operadora() {
    float a, b, suma, resta, multiplicacion, division;
    int opcion;

    cout << "\t\t Escoja el tipo de operacion que quiere hacer " << endl << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "-----------------------------------------------------------" << endl << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    switch (opcion) {
        case 1:
            suma = a + b;
            cout << "El resultado de la suma es: " << suma << endl;
            break;
        case 2:
            resta = a - b;
            cout << "El resultado de la resta es: " << resta << endl;
            break;
        case 3:
            multiplicacion = a * b;
            cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
            break;
        case 4:
            if (b != 0) {
                division = a / b;
                cout << "El resultado de la division es: " << division << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Usted ingreso un numero no valido" << endl;
    }
}

int main() {
    operadora();
    system("PAUSE");
    return 0;
}
