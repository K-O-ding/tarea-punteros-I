#include<iostream>
using namespace std;

// Prototipos de funciones
void modificarPorReferencia(int& ref);
void modificarPorPuntero(int* ptr);
// Las principales diferencias entre pasar un valor por
/*
Las principales diferencias entre pasar un valor por referencia
a pasarlo por puntero son:
- Es más sencillo utilizar la referencia, no hay que desreferenciar como en los punteros
- En la referencia por función se pasa la variable tal cual, sin pasar la direccion de memoria.
- Los punteros pueden ser reasignados para apuntar a otra direccion de memoria, a diferencia del paso por referencia 
- Dado que los punteros pueden ser nullptr, se requiere manejo de errores, a diferencia del paso por referencia.
*/

int main(){

    // Se declaran dos enteros
    int ref = 5;
    int ptr = 10;

    // Se modifican ambos valores por referencia y por puntero
    modificarPorReferencia(ref);
    modificarPorPuntero(&ptr);

    // Se imprimen los valores modificados
    cout<<"\nEl doble de 5 (por referencia) es: "<<ref<<endl;
    cout<<"El doble de 10 (por puntero) es: "<<ptr<<endl;

    return 0;
}

void modificarPorReferencia(int& ref){
    // Se duplica el valor por referencia
    ref = 2 * ref;
}

void modificarPorPuntero(int* ptr){
    // Se duplica el valor por puntero
    *ptr = 2 * (*ptr);
}