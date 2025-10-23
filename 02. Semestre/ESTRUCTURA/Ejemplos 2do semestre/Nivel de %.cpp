#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    double porcentaje;
    cout << "Ingrese la cantidad de preguntas del test: ";
    cin >> a;
    cout << "Ingrese la cantidad de respuestas acertadas: ";
    cin >> b;
    if (a == 0) { 
        cout << "La cantidad de preguntas no puede ser cero.";
        return 1; 
    }
    porcentaje = (static_cast<double>(b) / a) * 100;
    if (porcentaje < 50) {
        cout << "Fuera del nivel ";
    } else if (porcentaje >= 50 && porcentaje <= 75) {
        cout << "Nivel regular";
    } else if (porcentaje > 75 && porcentaje <= 89) {
        cout << "Nivel medio";
    } else if (porcentaje > 90) {
        cout << "Nivel máximo";
    }
    return 0;
}
