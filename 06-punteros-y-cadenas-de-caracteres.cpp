#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // Se declara la cadena como arreglo y como puntero
    char saludo[] = "Hola";
    char *saludo2 = "Hola"; // Aqui se muestra la advertencia "ISO C++ forbids converting a string constant to 'char*'"


    // Se imprime cada letra de 'saludo' usando aritmetica de punteros
    for (int i = 0; i < strlen(saludo); i++)
    {
        cout<<*(saludo + i);
    }
    cout<<endl;

    // Se imprime cada letra de 'saludo2' usando aritmetica de punteros
    for (int i = 0; i < strlen(saludo2); i++)
    {
        cout<<*(saludo2 + i);
    }
    cout<<endl;

    // Se intenta modificar la primera letra en cada caso
    saludo[0]='h';
    saludo2[0]='h'; // Aqui se muestra el error "Exception has occurred: Segmentation fault"

    return 0;
}
