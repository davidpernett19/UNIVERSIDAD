#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1, num2;
	std::cout<<"Ingrese el valor A: ";
	cin>>num1;
	std::cout<<"Ingrese el valor B: ";
	cin>>num2;
	if (num1!=num2)
	std::cout<<"A NO ES IGUAL B ";
	else if (num1==num2)
	std::cout<<"A SI ES IGUAL B ";
	else
	std::cout<<"VALOR NO VALIDO; ";
	system("pause");
}
