#include<iostream>
using namespace std;
int main(){
	int cuenta, suma=0;
	cout<<"Ingrese varios numeros para sumarlos entre si, cuando quiera que pare, ingrese el 0 "<<endl;
	do{
		cin>>cuenta;
		if (cuenta !=0 ) {
			suma += cuenta;
		}
	} while (cuenta!=0);
	cout<<"la suma total de los numeros es: "<<suma<<endl;
	return 0;
}
