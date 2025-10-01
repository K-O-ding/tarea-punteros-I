#include<iostream>
#include<cstring>
using namespace std;

// Prototipo de funcion
void invertirCadena(char* str);

int main(){
    // Se declara la cadena
    char str[] = "Hola";

    // Se llama a la funcion
    invertirCadena(str);

    // Se imprime la cadena invertida
    cout<<"\nLa cadena invertida es: "<<str<<endl;
    return 0;
}

void invertirCadena(char* str){
    // Los indices son el inicio y el final de la cadena
    int i = 0, j = strlen(str)-1;
    // Se declara una variable temporal
    char temp;

    while (i<j)
    {
        // Se implementa la logica de intercambio con aritmetica de punteros
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;

        i++;
        j--;
    }
    
}
