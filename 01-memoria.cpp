#include<iostream>
using namespace std;

int main(){

    // Declaramos las variables
    char c = 'a';
    int i = 5;
    float f = 3.14; 

    // Imprimimos los valores
    cout<<endl<<i<<endl;
    cout<<f<<endl;
    cout<<c<<endl;

    // Imprimimos las direcciones de memoria
    cout<<endl<<&i<<endl;
    cout<<&f<<endl;
    cout<<&c<<endl;
    return 0;
}