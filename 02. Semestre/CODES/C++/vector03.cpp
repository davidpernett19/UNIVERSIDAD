#include<iostream>
using namespace std;
int main(){
	system ("color C0");
	cout<<"			Dijite 5 numeros y estos seran impresos al contrario que los dijito "<<endl;
	int numero [4];
	cin>>numero [0];
	cin>>numero [1];
	cin>>numero [2];
	cin>>numero [3];
	cout<<endl;
	cout<<"El orden contrario es el siguiente: "<<endl<<endl;
	cout<<numero [3]<<endl;
	cout<<numero [2]<<endl;
	cout<<numero [1]<<endl;
	cout<<numero [0]<<endl;
	return 0;
}
