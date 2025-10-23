#include<iostream>
using namespace std;
int main(){
	
	int dia;
	cout<<"\t\t Elija un numero del 1 al 7 para ver que dia representa: "<<endl<<endl;
	cout<<"1"<<endl;
	cout<<"2"<<endl;
	cout<<"3"<<endl;
	cout<<"4"<<endl;
	cout<<"5"<<endl;
	cout<<"6"<<endl;
	cout<<"7"<<endl;
	cout<<"-----------------------------------------------------------"<<endl<<endl;
	cin>>dia;
	switch(dia)
{
case 1:cout<<"Usted escogio lunes"<<endl;
break;
case 5:cout<<"Usted escogio viernes"<<endl;
break;
case 3:cout<<"Usted escogio miercoles"<<endl;
break;
case 4:cout<<"Usted escogio jueves"<<endl;
break;
case 2:cout<<"Usted escogio martes"<<endl;
break;
case 6:cout<<"Usted escogio sabado"<<endl;
break;
case 7:cout<<"Usted escogio domnigo"<<endl;
break;
default: cout<<"Usted ingreso un numero no valido"<<endl;
}
return 0;
}
