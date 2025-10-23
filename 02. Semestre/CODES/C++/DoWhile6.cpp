#include <iostream>
using namespace std;
int main() {
    int cantidad;
    float precio, totalFactura = 0.0;
    do {
        cout << "Introduce la cantidad vendida (0 para terminar): ";
        cin >> cantidad;
        if (cantidad != 0) {
            cout << "Introduce el precio por unidad: ";
            cin >> precio;
            totalFactura += cantidad * precio;
        }
    } while (cantidad != 0);
    cout << "El total de la factura es: " << totalFactura << endl;
    return 0;
}

