#include <iostream>
using namespace std;
int main (){
    int f1, c1, i, j,opcion, columna;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                         Pacial Matrices                    "<<endl<<endl<<endl;
    cout<<"     1. Escoja cuantas filas y columnas desea en la matriz         "<<endl<<endl<<endl;   
    
    cout<<"FILAS: ";cin>>f1;
    cout<<"COLUMNAS: ";cin>>c1;
    
    cout<<endl<<endl;
    cout<<"                         Pacial Matrices                    "<<endl<<endl;
    cout<<"- Desea: "<<endl;
    cout<<"     1. Resta."<<endl;
    cout<<"     2. Division."<<endl;
    cout<<"     3. Suma."<<endl;
    cout<<"     4. Multiplicacion."<<endl;
    cout<<"     5. Transpuesta"<<endl;
    cout<<"     6. Elevadas al cuadrado"<<endl;

    cout<<"- Escoja la opcion: "<<endl;
    cin>>opcion;

    switch(opcion)
    {
    case 1:
        cout<<"Dijite los numeros para restar "<<endl;
    break;
    case 2:
        cout<<"Dijite los numeros para dividir "<<endl;
    break;
    case 3:
        cout<<"Dijite los numeros para sumar "<<endl;
    break;
    case 4:
        cout<<"Dijite los numeros para multiplicar "<<endl;
    break;
    case 5:
        cout<<"Dijite los numeros para Trasnponer"<<endl;
    break;
    case 6:
        cout<<"Dijite los numeros para Elevar al cuadrado"<<endl;
    break;
    }
    

    return 0;
}