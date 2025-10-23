#include<iostream>
#include<string>
using namespace std;
int main ()
{
	int a;
	cout<<"Ingrese un valor para determinar si es positivo, nulo o negativo: ";
	cin>>a;
	
	if (a > 0){
		cout<<"El Numero es Positivo! ";
	}else if (a < 0){
		cout<<"El numero es Negativo! ";
	} else { 
		cout<<"El numero es NULO! ;"; 
	}
	system("pause");	
	return 0;
}
