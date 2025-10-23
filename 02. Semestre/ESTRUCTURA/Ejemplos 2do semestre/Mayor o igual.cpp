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
	if (num1<num2)
	std::cout<<"A ES MENOR QUE B ";
	if (num1==num2)
	std::cout<<"A IGUAL QUE B ";
	else if (num1>num2)
	std::cout<<"A ES MAYOR QUE B ";
	else
	system("pause");
}
