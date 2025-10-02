#include<iostream>
#include<cstring>
using namespace std;

// Prototipo de funcion
int contarCaracter(const char* str, char objetivo);

int main(){

    // Se declara la cadena y el caracter objetivo
    char str[] = "ferrocarrilero"; // palabra con 5 r's
    char objetivo = 'r';

    // El numero de apariciones del caracter se almacena en un int
    int num_apariciones = contarCaracter(str, objetivo);

    // Se imprime el numero de apariciones
    cout<<"\nEn la palabra ferrocarrilero aparece "<<num_apariciones<<" veces el caracter '"<<objetivo<<"'"<<endl;
    return 0;
}

int contarCaracter(const char* str, char objetivo){
    // Se declara un contador
    int counter=0;

    // Se recorre todo el arreglo
    for (int i = 0; i < strlen(str); i++)
    {
        // Si se encuentra el caracter objetivo, se aumenta el contador
        if (*(str + i) == objetivo)
        {
            counter += 1;
        }
    }
    
    // Cuando se termina de contar, retorna el numero de apariciones del caracter objetivo
    return counter;
}