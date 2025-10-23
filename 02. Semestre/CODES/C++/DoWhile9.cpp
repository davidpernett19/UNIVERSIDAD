#include<iostream>
using namespace std;
int main(){
	int mul1=15,mul2=15;
	do{
		if (mul1 % 3 ==0 && mul2 % 5 ==0){
			cout<<mul1<<" Es multiplo de 3 "<<endl;
			cout<<mul2<<" Es multiplo de 5 "<<endl;
		}
		mul1++;
		mul2++;
	}
	while (mul1&&mul2<=45.0);
	return 0;
}
