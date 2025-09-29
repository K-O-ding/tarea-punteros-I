#include<iostream>
using namespace std;

// Prototipo de funcion
void multiplicar_por_dos(int* n);

int main(){

    // Se declara la variable
    int a = 5;

    // Se llama a la funcion
    multiplicar_por_dos(&a);

    // Se imprime el nuevo valor
    cout<<endl<<a<<endl;

    return 0;
}

void multiplicar_por_dos(int* n){
    // Se multiplica por dos al valor al que apunta el puntero 
    *n *= 2; 
}