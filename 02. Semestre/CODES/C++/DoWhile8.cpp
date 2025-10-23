#include<iostream>
using namespace std;
int main(){
	int num=15;	
	do{
		if (num%3==0){
			cout<<num<<endl;
		}
		num++;
	}
	while (num<=30);
	return 0;
}
