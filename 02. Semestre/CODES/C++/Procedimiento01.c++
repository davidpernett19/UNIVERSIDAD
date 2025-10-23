#include<iostream>

using namespace std;
void operadora(void){

    float a, b;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>b;
    cout<<"El resultado de la suma es: "<<(a+b)<<endl;
    cout<<endl;
    cout<<"El resultado de la resta es: "<<(a-b)<<endl;
    cout<<endl;
    cout<<"El resultado de la multiplicacion es: "<<(a*b)<<endl;
    cout<<endl;
    cout<<"El resultado de la divicion es: "<<(a/b)<<endl;
    cout<<endl;
}

int main(){
    operadora();

    system("PAUSE");
    return 0;

}
