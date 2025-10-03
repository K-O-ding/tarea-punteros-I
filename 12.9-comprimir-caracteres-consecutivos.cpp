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
}