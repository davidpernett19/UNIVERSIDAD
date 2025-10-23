#include<iostream>
using namespace std;
int main(){
	int mes;
	cout<<"\t\t Elija un numero del 1 al 12 para saber que categoria tiene cada signo zodiacal: "<<endl<<endl;
	cout<<"1 aries"<<endl;
	cout<<"2 tauro"<<endl;
	cout<<"3 geminis"<<endl;
	cout<<"4 cancer"<<endl;
	cout<<"5 leo"<<endl;
	cout<<"6 virgo"<<endl;
	cout<<"7 libra"<<endl;
	cout<<"8 escorpio"<<endl;
	cout<<"9 sagitario"<<endl;
	cout<<"10 capricornio"<<endl;
	cout<<"11 acuario"<<endl;
	cout<<"12 piscis"<<endl;
	cout<<"-----------------------------------------------------------"<<endl<<endl;
	cin>>mes;
	switch(mes)
{
case 1:cout<<"Aries representa fuego "<<endl;
break;
case 5:cout<<"geminis representa tierra "<<endl;
break;
case 3:cout<<"tauro representa aire "<<endl;
break;
case 4:cout<<"cancer representa agua "<<endl;
break;
case 2:cout<<"leo representa fuego"<<endl;
break;
case 6:cout<<"virgo representa tierra "<<endl;
break;
case 7:cout<<"libra representa aire "<<endl;
break;
case 8:cout<<"escorpio representa agua "<<endl;
break;
case 9:cout<<"sagitario representa fuego "<<endl;
break;
case 10:cout<<"capricornio representa tierra "<<endl;
break;
case 11:cout<<"acuario representa aire "<<endl;
break;
case 12:cout<<"piscis representa agua "<<endl;
break;
default: cout<<"USTED INGRESO UN NUMERO INVALIDO "<<endl;
}
return 0;
}
