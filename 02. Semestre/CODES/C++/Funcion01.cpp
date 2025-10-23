#include<iostream>
using namespace std;

int calcular_edad(int da, int ma, int aa, int dn, int mn, int an)
{
    int edad = aa-an;
    if (ma<mn)
        edad--;
    else if(ma == mn and da<dn)
            edad--;
    return edad;
}
int bisiesto(int a)
{
    if (a%4==0 and a%100 !=0 or a%400==0)
    cout<<"kkkk";

    else 
        return 1;
}
int fecha_valida(int d, int m, int a)

{
    if (d < 1 or d > 31 or m < 1 or m > 12 or a < 1)
    {
        return 0;
    }
    switch (m)
    {
    case 4:
    case 6:
    case 9:
    case 11: if(d > 30)
                {
                    return 0;
                }
        break;
    case 2: if (bisiesto(a))
            {
                if(d > 29)
                {
                    return 0;
                }
            }
            else if (d > 28)
                {
                    return 0;
                }
            break;
    }
    return 1;
}

int main(){
    int diaa, mesa, anioa, dian, mesn, anion, edad;
    do
    {
        cout<<"Introduce fecha actual: "<<endl;
        cout<<"dia : ";cin>>diaa;
        cout<<"mes : ";cin>>mesa;
        cout<<"a"<<(char)164<<"o: ";cin>>anioa;
    } while (!(fecha_valida(diaa,mesa,anioa)));
    {
        cout<<endl<<"Introduce fecha de nacimiento: "<<endl;
        cout<<"dia: ";cin>>dian;
        cout<<"ems: ";cin>>mesn;
        cout<<"a: "<<(char)164<<"o: "; ; cin>>anion;
    } while(!(fecha_valida(dian,mesn,anion)));

    edad=calcular_edad(diaa, mesa, anioa, dian, mesn, anion);
    cout<< endl<<"Edad :"<<edad<<endl<<endl;

    bisiesto(anioa);

    system("PAUSE");
    
}
