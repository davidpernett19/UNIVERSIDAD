#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b, c;
	std::cout<<"Ingrese valor A: ";
	std::cin>>a;
	std::cout<<"Ingrese valor B: ";
	std::cin>>b;
	std::cout<<"Ingrese valor C: ";
	std::cin>>c;
	if ((a>b)and(a>c))
	std::cout<<"El valor A es el mayor ";
	else
	if ((b>a)and(b>c))
	std::cout<<"El valor B es el mayor ";
	else
	std::cout<<"El valor C es el mayor: ";
	std::cout<<endl;
	system("pause");
}
