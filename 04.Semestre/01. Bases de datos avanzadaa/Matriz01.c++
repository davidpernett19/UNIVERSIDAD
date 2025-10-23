#include <iostream>
using namespace std;

int main() {
    int matriz[2][3]; // Matriz de 2 filas y 3 columnas

    // Llenar la matriz
    cout << "Ingrese valores para la matriz (2x3):\n";
    for (int fila = 0; fila < 2; fila++) {
        for (int col = 0; col < 3; col++) {
            cout << "Elemento [" << fila << "][" << col << "]: ";
            cin >> matriz[fila][col];
        }
    }

    // Mostrar la matriz
    cout << "\nContenido de la matriz:\n";
    for (int fila = 0; fila < 2; fila++) {
        for (int col = 0; col < 3; col++) {
            cout << matriz[fila][col] << "\t"; // \t para alinear columnas
        }
        cout << endl;
    }

    return 0;
}