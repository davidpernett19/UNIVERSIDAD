#include<iostream>
using namespace std;
int main(){
    struct datos_personales
    {
        string nombre;
        int id;
        int edad;
        float nota;
    }
    persona;
    persona.nombre = "Juan";
    persona.id = 12345678;
    persona.edad = 23;
    persona.nota = 4.5;
    cout<<"\n           DATOS PERSONALES"<<endl;
    cout<<"\n El nombre es: "<<persona.nombre;
    cout<<"\n El ID es: "<<persona.id;
    cout<<"\n La edad es: "<<persona.edad;
    cout<<"\n La nota es: "<<persona.nota;
    return 0;
}