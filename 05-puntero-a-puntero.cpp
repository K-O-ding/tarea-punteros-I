#include<iostream>
using namespace std;

int main(){

    // Se declara el entero, el puntero y el doble puntero.
    int n = 5;
    int* ptr = &n;
    int** pptr = &ptr;

    // Se imprime el valor original usando doble puntero
    cout<<endl<<**pptr<<endl;

    return 0;
}