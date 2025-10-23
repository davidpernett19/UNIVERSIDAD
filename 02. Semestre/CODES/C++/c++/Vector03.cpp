#include<iostream>
using namespace std;

int main() {
    int vector[11], i;
    int mayores = 0, menores = 0, iguales = 0; 
    float vectorpromedio = 0.0; 
    cout << "Digite las coordenadas del vector (10 elementos): " << endl;
    for (i = 0; i < 10; i++) {
        cin >> vector[i];
    }
    for (i = 0; i < 10; i++) {
        vectorpromedio += vector[i]; 
    }
    vectorpromedio /= 10; 
    cout << "Promedio del vector es: " << vectorpromedio << endl;
    for (i = 0; i < 10; i++) {
        if (vector[i] > vectorpromedio) {
            mayores++;
        } else if (vector[i] < vectorpromedio) {
            menores++;
        } else {
            iguales++;
        }
    }
    cout << "Cantidad de elementos mayores al promedio: " << mayores << endl;
    cout << "Cantidad de elementos menores al promedio: " << menores << endl;
    cout << "Cantidad de elementos iguales al promedio: " << iguales << endl;
    return 0;
}