#include<iostream>
#include<cstring>
using namespace std;

// Prototipo de funcion
void copiarCadena(char* destino, const char* origen);

int main(){
    // Se declaran las cadenas de origen y copia
    char str[] = "Hola Mundo :D";
    char str_copy[30];

    // Se llama a la funcion
    copiarCadena(str_copy, str);

    // Se imprime la cadena copiada
    cout<<"\nLa cadena copiada es: "<<str_copy<<endl;

    return 0;
}

void copiarCadena(char* destino, const char* origen){
    // Se recorre cada elemento de la cadena
    for (int i = 0; i < strlen(origen); i++)
    {
        // Se copia cada elemento de la cadena origen
        *(destino + i) = *(origen + i);
    }
}