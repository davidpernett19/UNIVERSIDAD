#include<iostream>
#include<string>
using namespace std;
int main()
{
	int nota1;
	int nota2;	
	cout<<"Ingrese nota de Matematicas"<<endl;
	cin>>nota1;
	cout<<"ingrese nota Quimica"<<endl;
	cin>>nota2;
	
	if((nota1>=60)and(nota2>=80))
	{
	cout<<"PASASTE";
	}
	else
	cout<<"PERDISTE!!";
}
