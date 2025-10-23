#include<iostream>
using namespace std;
int main(){
    system ("color f2");
    int a;
    cout<<"Ingrese cualquier número, cuando llegue a 0 el proceso terminará" << endl;
    cin>>a;
    do {
        cout << a << endl;
        a--;
    } while (a >= 0);
    system("PAUSE");
    return 0;
}
