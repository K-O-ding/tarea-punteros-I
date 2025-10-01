#include<iostream>
#include<cstring>
using namespace std;

// Prototipo de funcion
bool esPalindromo(char* str);

int main(){

    //Se declara una cadena de caracteres de prueba
    char str1[] = "reconocer";

    // Si la cadena es (o no) un palindromo, se imprime un mensaje confirmando la informacion
    if (esPalindromo(str1))
    {
        cout<<"\nLa palabra es un palindromo"<<endl;
    }else
    {
        cout<<"La palabra no es un palindromo"<<endl;
    }

    return 0;
}

bool esPalindromo(char* str){
    // Se declaran dos punteros, uno que apunta al inicio de la cadena y otro que apunta al final de la cadena
    char* inicio = str;
    char* final = str + strlen(str) - 1;

    // Mientras que el puntero que avanza sea menor que el puntero que retrocede
    while (inicio < final)
    {
        // Si los caracteres en posiciones opuestas son distintos, retorna false
        if (*inicio != *final)
        {
            return false;
        }

        // Avanza 'inicio' en una posicion y retrocede 'final' en una posicion
        inicio++;
        final--;
    }

    // Si ninguno de los caracteres opuestos es distinto, returna true
    return true;
}