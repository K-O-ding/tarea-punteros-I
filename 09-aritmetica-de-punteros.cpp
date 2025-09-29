#include<iostream>
using namespace std;

int main(){
    // Se declara un arreglo de 5 enteros
    const int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // Se declara un puntero que apunta a la direccion de memoria de arr[0]
    int* p = arr;

    // Se imprime los valores con aritmetica de punteros
    for (int i = 0; i < n; i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;

    // Se intenta imprimir *(p + 5)
    cout<<*(p + 5)<<endl; // imprime '0'
    
    return 0;
}