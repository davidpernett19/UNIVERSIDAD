#include<iostream>
using namespace std;
int main(){
	char operacion;
	cout<<"\t\t Elija la operacion que quiere hacer: "<<endl<<endl;
	cout<<"A. SUMA"<<endl;
	cout<<"B. RESTA"<<endl;
	cout<<"C. MULTIPICACION"<<endl;
	cout<<"D. DIVISION"<<endl;
	cout<<"-----------------------------------------------------------"<<endl<<endl;
	cin>>operacion;
	switch(operacion)
{
int c,d,e;
	case 'A':
	cout<<"Ingrese el numero A: "<<endl;
	cin>>c;
	cout<<"Ingrese el numero B: "<<endl;
	cin>>d;
	e=c+d;
	cout<<"el resultado de la operacion es: "<<e<<endl;
	break;
	case 'B':
	cout<<"Ingrese el numero A: "<<endl;
	cin>>c;
	cout<<"Ingrese el numero B: "<<endl;
	cin>>d;
	e=c-d;
	cout<<"el resultado de la operacion es: "<<e<<endl;
	break;
	case 'C':
	cout<<"Ingrese el numero A: "<<endl;
	cin>>c;
	cout<<"Ingrese el numero B: "<<endl;
	cin>>d;
	e=c*d;
	cout<<"el resultado de la operacion es: "<<e<<endl;
	break;
	case 'D':
	cout<<"Ingrese el numero A: "<<endl;
	cin>>c;
	cout<<"Ingrese el numero B: "<<endl;
	cin>>d;
	e=c/d;
	cout<<"el resultado de la operacion es: "<<e<<endl;
	break;
default: cout<<"USTED INGRESO UN NUMERO INVALIDO "<<endl;
}
return 0;
}
