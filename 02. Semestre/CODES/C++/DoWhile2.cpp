#include<iostream>
using namespace std;
int main(){
	int cuenta;
	cout<<"Ingrese un numero y este llegara descendentemente hasta 0: "<<endl;
	cin>>cuenta;
	do{
		(cuenta--);
		cout<<cuenta<<endl;
	}
	while	(cuenta>0);
}

