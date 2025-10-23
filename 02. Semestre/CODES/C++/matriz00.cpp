#include<iostream>
using namespace std;
int main(){
    float   matriz[2][3][3];
    float matrizsuma [3][3];
    int m, fila, columna;

    //pedimos los datos de las dos matrices
    for (m=0; m<2; m++)
        for (fila=0; fila<3; fila++)
            for (columna=0; columna<3; columna++)
            {
                cout<< "En la matriz "<<m+1<<", dime el dato de la fila "<< fila+1<<" y la columna "<<columna+1<<": ";
                cin>>matriz[m][fila][columna];
            }

    // calculamos la suma 
    for ( fila=0; fila<3; fila++)
        for (columna=0; columna<3; columna++)
            matrizsuma[fila][columna] = matriz[0][fila][columna] + matriz[1][fila][columna];

    // Ahora se imprime el resultado (Puede salir descolocado)
    cout <<"La matriz suma es "<<endl;
    for (fila=0; fila<3; fila++)
        {
            for(columna=0; columna<3; columna++)
            cout<<matrizsuma[fila][columna] << " ";
            cout<<endl;
        }
        return 0;
}

