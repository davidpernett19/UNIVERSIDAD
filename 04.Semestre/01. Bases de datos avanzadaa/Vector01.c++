#include <iostream>
using namespace std;

int main() {
    int vector [5]; //el numero de vectores

    //instruccion para llenar el vector con un numero

    cout<<"ingresar 5 numeros:\n";
    for (int i=0;i<5;i++){
        cout <<"Elemento "<<i+1<<": ";
        cin>>vector[i];
    }

    //mostrar el vector
    cout<< "\nEl vector contiene: \n";
    for (int i =0;i<5;i++){
        cout << vector[i]<<" ";
    }

    cout << endl;
    return 0;
}
