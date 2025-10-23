#include<iostream>
using namespace std;
int main(){
	system ("color A0");
	cout<<"Dijite 4 numeros para hayar el promedio: "<<endl;
	float numero [3];
	float resultado, promedio=4.0;
	cin>> numero[0];
	cin>> numero[1];
	cin>> numero[2];
	cin>> numero[3];
	resultado= (numero [0] + numero [1] + numero [2] + numero [3])/promedio;
	cout<<"El promedio de los numeros ingresados es: "<<resultado<<endl;
	return 0; 
}
