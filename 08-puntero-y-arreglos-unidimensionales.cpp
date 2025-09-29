#include<iostream>
using namespace std;

int main(){

    // Se declara un arreglo de 5 enteros
    const int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // Se declara un puntero que apunta a la direccion de memoria de arr[0]
    int* p = arr;

    // Se imprime el arreglo antes del cambio
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Se utiliza el puntero para modificar los valores del arreglo
    *(p + 1) = 20; // Se modifica el valor en la segunda posicion 
    *(p + 4) = 50; // Se modifica el valor en la quinta posicion 

    // Se imprime el arreglo luego del cambio
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}