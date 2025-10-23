#include <iostream>
#include <vector>

using namespace std;

// Esto es para ingresar las matrices
void ingresarMatriz(vector<vector<int>>& matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// esto es para mostrarle las matrices al usuario
void mostrarMatriz(const vector<vector<int>>& matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// SUMA
vector<vector<int>> sumarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, int filas, int columnas) {
    vector<vector<int>> C(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

// RESTA
vector<vector<int>> restarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, int filas, int columnas) {
    vector<vector<int>> C(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

// MULTIPLICACION
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, int filas, int columnas, int columnasB) {
    vector<vector<int>> C(filas, vector<int>(columnasB, 0));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            for (int k = 0; k < columnas; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

// TRASPONER LA MATRIZ
vector<vector<int>> transponerMatriz(const vector<vector<int>>& A, int filas, int columnas) {
    vector<vector<int>> C(columnas, vector<int>(filas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            C[j][i] = A[i][j];
        }
    }
    return C;
}

// POTENCIA
vector<vector<int>> elevarMatrizCuadrado(const vector<vector<int>>& A, int filas, int columnas) {
    vector<vector<int>> C(filas, vector<int>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            C[i][j] = A[i][j] * A[i][j];
        }
    }
    return C;
}

int main() {
    system ("color f0");
    int filas, columnas, columnasB;
    cout << "Ingrese el numero de filas de las matrices: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la primera matriz: ";
    cin >> columnas;
    cout << "Ingrese el numero de columnas de la segunda matriz (solo para multiplicacion): ";
    cin >> columnasB;

    vector<vector<int>> A(filas, vector<int>(columnas));
    vector<vector<int>> B(filas, vector<int>(columnas));  // Solo la multiplicación requiere que las columnas de B sean distintas

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    ingresarMatriz(A, filas, columnas);

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    ingresarMatriz(B, filas, columnas);

    int opcion;
    do {
        cout<<endl<<endl;
        cout << "                   Menu                 "<<endl<<endl;
        cout << "1. Suma de matrices\n";
        cout << "2. Resta de matrices\n";
        cout << "3. Multiplicación de matrices\n";
        cout << "4. Transpuesta de la primera matriz\n";
        cout << "5. Elevar primera matriz al cuadrado\n";
        cout << "6. Salir"<<endl<<endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                vector<vector<int>> C = sumarMatrices(A, B, filas, columnas);
                cout << "Resultado de la suma:" << endl;
                mostrarMatriz(C, filas, columnas);
                break;
            }
            case 2: {
                vector<vector<int>> C = restarMatrices(A, B, filas, columnas);
                cout << "Resultado de la resta:" << endl;
                mostrarMatriz(C, filas, columnas);
                break;
            }
            case 3: {
                vector<vector<int>> C = multiplicarMatrices(A, B, filas, columnas, columnasB);
                cout << "Resultado de la multiplicación:" << endl;
                mostrarMatriz(C, filas, columnasB);
                break;
            }
            case 4: {
                vector<vector<int>> C = transponerMatriz(A, filas, columnas);
                cout << "Transpuesta de la primera matriz:" << endl;
                mostrarMatriz(C, columnas, filas);
                break;
            }
            case 5: {
                vector<vector<int>> C = elevarMatrizCuadrado(A, filas, columnas);
                cout << "Primera matriz elevada al cuadrado:" << endl;
                mostrarMatriz(C, filas, columnas);
                break;
            }
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 6);

    return 0;
}
