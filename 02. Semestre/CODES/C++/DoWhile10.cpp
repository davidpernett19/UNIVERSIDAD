#include<iostream>
using namespace std;
int main(){
	int edad,personas, conteo=0, i=0, suma;
	cout<<"ingrese las edades de las personas entre 18 y 45 para calcular cuantas personas tiene: "<<endl;
	do{
		cin>>edad;
		if (edad>=18 && edad<=45){
		conteo++;
		}
	}
		while (edad>=18 && edad<=45);
		cout<<"la cantidad de personas que tienen edad de 18 a 45 son: "<<conteo<<endl;
		return 0;
}
