#include <iostream>
#include <string>
using namespace std;
int main()
{
	double num1a, num1b, num2a, num2b, num3a, num3b, num4a, num4b, num5a, num5b;
	double suma1, suma2, suma3, suma4, suma5;
	double resta1, resta2, resta3, resta4, resta5;
	double multiplicacion1, multiplicacion2, multiplicacion3, multiplicacion4, multiplicacion5;
	double division1, division2, division3, division4, division5;
	std::cout<<"Ahora vamos a hacer 5 DIVISIONES"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"Ingrese el DIVIDENDO de la operacion 1: ";
	std::cin>>num1a;
	std::cout<<"Ingrese el DIVISOR de la operacion 1: ";
	std::cin>>num1b;
	division1=num1a/num1b;
	std::cout<<"El resultado de la DIVISION 1 es: "<<division1<<std::endl;
	std::cout<<std::endl;
	return 0;
}
