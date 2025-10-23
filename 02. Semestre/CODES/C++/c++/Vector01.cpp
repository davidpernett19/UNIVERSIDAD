#include<iostream>
using namespace std;
int main(){
   float vector1[3];
   float vector2[3];
   float vectorsuma[3];
   int i;

   for (i=0; i<3; i++){
    cout<<" Introduce el componente "<< i << " del primer vector ";
    cin>> vector1[i];
   }
    for (i=0;i<3;i++){
        cout<<" Introduce el componente "<< i << " del segundo vector " ;
        cin>> vector2[i];
    }
    for (i=0;i<3;i++){
        vectorsuma[i] = vector1[i] + vector2 [i];
    }
    cout<<"la suma de los vectores es "<<endl;
    for (i=0;i<3;i++){
        cout<<vectorsuma[i]<<" ";
    }
return 0;
}