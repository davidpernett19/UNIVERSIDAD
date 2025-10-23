#include<iostream>
using namespace std;

struct datos_personales
{
    char nombre [100];
    int edad;
}persona1;

int main(){
    cout<<"Nombre: ";
    cin.getline(persona1.nombre,100,'\n');
    cout<<"Edad: ";
    cin>>persona1.edad;

    cout<<"\n           Imprimiendo datos         \n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;

    return 0;
}
