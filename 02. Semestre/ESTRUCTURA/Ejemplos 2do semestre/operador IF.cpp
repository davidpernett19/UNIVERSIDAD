# include <iostream>
#include <string>
using namespace std;
int main()
{
int num1, num2;
std::cout<<"Ingrese el primer numero: ";
cin >> num1;
std::cout<<"Ingrese el segundo numero: ";
cin >> num2;
if (num1>num2)
std::cout << "A es mayor que B ";
else if (num1<num2)
std::cout << "A es menor que B ";
else
std::cout << "NUMERO NO VALIDO";
system("pause");
}
