#include<iostream>
#include<cstring>
using namespace std;

// Prototipo de funcion
void eliminarEspacios(char* str);

int main(){
    // Se declara una cadena con espacios
    char str[] = "e j e r c i c i o s";

    // Se llama a la funcion para eliminar los espacios de la cadena
    eliminarEspacios(str);

    // Se imprime la cadena sin espacios
    cout<<"\nLa cadena sin espacios es: "<<str<<endl;

    return 0;
}

void eliminarEspacios(char* str){
    // Se declara una variable temporal para realizar el intercambio
    char temp;

    for (int i = 0; i < strlen(str); i++)
    {
        // Se recorre la cadena hasta que se encuentra un espacio
        if (*(str + i) == ' ')
        {
            for (int j = i; j < strlen(str); j++)
            {
                // Con otro indice, se recorre la cadena desde el espacio hasta un caracter distinto del espacio
                if (*(str + j) != ' ')
                {
                    // Si se encuentra un caracter distinto del espacio se intercambia con el espacio
                    temp = *(str + i);
                    *(str + i) = *(str + j);
                    *(str + j) = temp;

                    // Se aumenta el indice con el que se encontro el espacio
                    i++;
                }
            }
        }
    }
}