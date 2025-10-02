#include<iostream>
#include<cstring>
using namespace std;

void reemplazar(char* str, char viejo, char nuevo);

int main(){

    // Se declaran la cadena, el caracter viejo y el caracter nuevo
    char str[] = "alabarda";
    char viejo = 'a';
    char nuevo = 'e';

    // Se llama a la funcion
    reemplazar(str, viejo, nuevo);

    // Se imprime la nueva cadena
    cout<<"\nLa cadena con los caracteres reemplazados es: "<<str<<endl;
    
    return 0;
}

void reemplazar(char* str, char viejo, char nuevo){
    // Se recorre todo el arreglo
    for (int i = 0; i < strlen(str); i++)
    {
        // Si se encuentra el caracter viejo, se reemplaza por el nuevo
        if (*(str + i) == viejo)
        {
            *(str + i) = nuevo;
        }
    }
}
