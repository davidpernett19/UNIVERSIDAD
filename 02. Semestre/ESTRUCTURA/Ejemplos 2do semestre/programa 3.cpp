#include<iostream>
using namespace std;
int main(){
	system ("color f2");
	int a;
	cout<<"ingrese cualquier numero, cuando llegue a 0 el proceso terminara "<<endl;
	cin>>a;
	do {
		cout << a << endl;
		a--;
	} while (a>=0);
	system("PAUSE");
	
}
