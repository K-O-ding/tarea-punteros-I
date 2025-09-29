#include<iostream>
using namespace std;

// Prototipo de funcion segura
bool esPtrSeguro(int* p);

int main(){

    // Se declara el puntero correctamente
    int* p = nullptr;

    // Se intenta modificar el valor al que apunta el puntero
    //*p=5; <- Aqui ocurre el error "Segmentation fault" 

    // Para evitar el error, se declara un entero y se asigna su direccion de memoria al puntero
    int n;
    p = &n;

    // Se modifica correctamente el valor al que apunta el puntero
    *p=5; // Esta vez no muestra errores

    // Se declara otro puntero para probar la funcion y se le asigna nullptr
    int* p2 = nullptr;

    // Si p2 es seguro, se imprime un mensaje que lo confirma
    if (esPtrSeguro(p2))
    {
        cout<<"\nEl puntero es seguro para desreferenciar."<<endl;
    }else
    {   // Caso contario, se imprime que p no es seguro
        cout<<"El puntero no es seguro (es nullptr)."<<endl;
    }
    
    return 0;
}

bool esPtrSeguro(int* p){
    // Retorna True si p es distinto a nullptr, caso contrario retorna false.
    return p!=nullptr;
}