#include<iostream>
using namespace std;
int main(){
	int mes;
	cout<<"\t\t Elija un numero del 1 al 12 para ver que mes corresponde: "<<endl<<endl;
	cout<<"1"<<endl;
	cout<<"2"<<endl;
	cout<<"3"<<endl;
	cout<<"4"<<endl;
	cout<<"5"<<endl;
	cout<<"6"<<endl;
	cout<<"7"<<endl;
	cout<<"8"<<endl;
	cout<<"9"<<endl;
	cout<<"10"<<endl;
	cout<<"11"<<endl;
	cout<<"12"<<endl;
	cout<<"-----------------------------------------------------------"<<endl<<endl;
	cin>>mes;
	switch(mes)
{
case 1:cout<<"Usted escogio enero "<<endl;
break;
case 5:cout<<"Usted escogio mayo "<<endl;
break;
case 3:cout<<"Usted escogio marzo "<<endl;
break;
case 4:cout<<"Usted escogio abril "<<endl;
break;
case 2:cout<<"Usted escogio febrero "<<endl;
break;
case 6:cout<<"Usted escogio junio "<<endl;
break;
case 7:cout<<"Usted escogio julio "<<endl;
break;
case 8:cout<<"Usted escogio agosto "<<endl;
break;
case 9:cout<<"Usted escogio septiembre "<<endl;
break;
case 10:cout<<"Usted escogio octubre "<<endl;
break;
case 11:cout<<"Usted escogio noviembre "<<endl;
break;
case 12:cout<<"Usted escogio diciembre "<<endl;
break;
default: cout<<"USTED INGRESO UN NUMERO INVALIDO "<<endl;
}
return 0;
}
