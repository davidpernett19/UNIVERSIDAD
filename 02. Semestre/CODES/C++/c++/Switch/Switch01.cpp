#include<iostream>
using namespace std;
int main(){
    int dia;
    cout<<"Ingrese el valor de 1 a 7 para validar que dia corresponde"<<endl<<endl;
    cout<<"1"<<endl;
    cout<<"2"<<endl;
    cout<<"3"<<endl;
    cout<<"4"<<endl;
    cout<<"5"<<endl;
    cout<<"__________________________________________________________________________________"<<endl<<endl;
    cin>>dia;
    
        switch(dia)
    {
    case 1:
        cout<<"Corresponde a lunes"<<endl;
    break;
    case 2:
        cout<<"Corresponde a martes"<<endl;
    break;
    case 3:
        cout<<"Corresponde a miercoles"<<endl;
    break;
    case 4:
        cout<<"Corresponde a jueves"<<endl;
    break;
    case 5:
        cout<<"Corresponde a viernes"<<endl;
    break;
    default: cout<<"El valor ingresado no es valido"<<endl;
    }
return 0;
}