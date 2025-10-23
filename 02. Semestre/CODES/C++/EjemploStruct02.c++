#include<iostream>
using namespace std;
int main(){
    
    struct Persona{
        char nombre [20];
        int edad;
    };
    Persona persona1 = {"Alejandro",20};
    Persona persona2 = {"Ruperto",15};

        cout<<"Nombre 1: "<<persona1.nombre<<endl;
        cout<<"Nombre 1: "<<persona1.edad<<endl;
        cout<<"Nombre 2: "<<persona2.nombre<<endl;
        cout<<"Nombre 2: "<<persona1.edad<<endl;
        cin.get();
        return 0;
        
}