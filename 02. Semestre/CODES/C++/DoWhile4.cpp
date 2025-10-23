#include<iostream>
using namespace std;
int main(){
	int vueltas;
	double numero, promedio,suma=0;	
	cout<<"Ingrese la canitdad de numeros que quiera que se promedien"<<endl;
	cin>>vueltas;
	if (vueltas<0 ){
		cout<<"NUMERO INVALIDO: El numero debe ser mayor a 0 "<<endl;
		return 1;
		}
		int contador=0;
		cout<<"Ingrese los numeros numero: "<<endl;
	do {
		cin>>numero;
		suma+=numero;
		contador++;
		
		} while (contador < vueltas);
		double (promedio=suma/vueltas);
		cout<<"el Promedio de los numeros ingresados es: "<<promedio<<endl;
		return 0;		
}
