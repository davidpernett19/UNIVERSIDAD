#include<iostream>
using namespace std;
int main(){
	int numero, suma;
	cout<<"Dijite varios numeros para sumarlos entre si, y cuando quiera temrinar dijite 0: "<<endl;
	cin>>numero;
	do{
		cin>>numero;
		suma+=numero;
	}
	while (numero!=0);
	cout<<"la suma de los resultados es: "<<suma<<endl;
	system("pause");
	return 0;
}
