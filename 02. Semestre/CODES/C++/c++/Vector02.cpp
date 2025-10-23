#include<iostream>
using namespace std;
int main(){
    system ("color E0");
    int vector1[3],vector2[3], vectordiff[3], i;
    for (i=0;i<3;i++){
        cout<<"Dijite las cordenadas del PRIMER VECTOR ";
        cin>>vector1[i]; 
    }
        for (i=0;i<3;i++){
        cout<<"Dijite las cordenadas del SEGUNDO VECTOR ";
        cin>>vector2[i];
        }
        for (i=0;i<3;i++){
        vectordiff[i] = vector1[i] * vector2[i];
        }
        cout<<"la diferencia de los vectores es "<<endl;
    for (i=0;i<3;i++){
        cout<<vectordiff[i]<<" ";
    }
}