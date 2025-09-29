#include<iostream>
using namespace std;

int main(){

    // Se declara la variable 'a'
    int a = 10;

    // Se declara un puntero que apunte a la variable 
    int *p = &a;

    // Se imprime el valor de 'a' usando '*p'
    cout<<endl<<*p;

    // Se imprime la direccion de 'a' usando 'p'
    cout<<endl<<p<<endl;

    return 0;
}