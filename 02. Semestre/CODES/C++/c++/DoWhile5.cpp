#include<iostream>
using namespace std;
int main(){
	system ("color A0");
	int numeros, mayor=0;
	cout<<"Ingrese la cantidad de numeros que quiera para validar cual es el mayor, cuando quiera que el proceso pare, dijite 0: "<<endl;
	do{
		cin>>numeros;
		if (numeros>mayor){
			mayor=numeros;			
		}
	}
	while (numeros!=0);
	cout<<"El numero mayor es: "<<mayor<<endl;
	return 0;
}
