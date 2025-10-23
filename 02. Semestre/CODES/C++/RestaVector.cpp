#include<iostream>
using namespace std;
int main(){
    system ("color E0");
    int vector1[2],vector2[2], vectordiff[2], i;
    for (i=0;i<2;i++){
        cout<<"Dijite las cordenadas del PRIMER VECTOR ";
        cin>>vector1[i]; 
    }
        for (i=0;i<2;i++){
        cout<<"Dijite las cordenadas del SEGUNDO VECTOR ";
        cin>>vector2[i];
        }
        for (i=0;i<2;i++){
        vectordiff[i] = vector1[i] - vector2[i];
        }
        cout<<"la diferencia de los vectores es "<<endl;
    for (i=0;i<2;i++){
        cout<<vectordiff[i]<<" ";
    }
}