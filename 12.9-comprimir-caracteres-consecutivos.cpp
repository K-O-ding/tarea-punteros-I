#include <iostream>
using namespace std;

// Prototipo de funcion
void comprimirCadena(const char* str_orig, char* str_comp);

int main() {
    // Se declara la cadena original
    const char* str_orig = "aaabbccccd";
    
    // Se declara la cadena comprimida
    char str_comp[100]; 

    // Se llama a la funcion
    comprimirCadena(str_orig, str_comp);

    // Se muestra la cadena original y la cadena comprimida
    cout<<"Cadena Original: "<<str_orig<<endl;
    cout<<"Cadena Comprimida: "<<str_comp<<endl;

    return 0;
}

void comprimirCadena(const char* str_orig, char* str_comp) {

    // Se cambia de nombre a los punteros para mayor claridad
    const char* lector = str_orig;
    char* escritor = str_comp;

    // Mientras no se llegue al final de la cadena de entrada
    while (*lector) 
    {
        // Se almacena el caracter de la secuencia
        char char_actual = *lector;
        // Se almacena la posicion en la cual empieza la secuencia
        const char* inicio_secuencia = lector;

        // Mientras el caracter sea el mismo, se avanza el puntero 'lector'
        while (*lector == char_actual) 
        {
            lector++;
        }

        // Se declara un contador de tipo 'int' que almacena cuantos caracteres iguales hay (se resta la posicion de los punteros)
        int ctr = lector - inicio_secuencia;

        // Se escribe el caracter en la salida y se avanza el puntero 'escritor'
        *escritor = char_actual;
        escritor++;

        // Se convierte 'ctr' a un 'char' y se escribe, luego se avanza el puntero 'escritor'
        *escritor = ctr + '0';
        escritor++;
    }

    // Se añade el caracter nulo para terminar la cadena de salida
    *escritor = '\0';
}