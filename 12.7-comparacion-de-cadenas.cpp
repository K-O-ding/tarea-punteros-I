#include<iostream>
#include<cstring>
using namespace std;

// prototipo de funcion
int compararCadenas(const char* str1, const char* str2);

int main(){
    // Se declaran las cadenas
    char str1[] = "hola";
    char str2[] = "hola";
    char str3[] = "Hola";
    
    // Se almacenan los retornos de las comparaciones en enteros
    int a = compararCadenas(str1, str2);
    int b = compararCadenas(str1, str3);
    int c = compararCadenas(str3, str1);
    
    // Se imprimen los resultados de las comparaciones
    cout<<"\nComparacion de "<<str1<<" y "<<str2<<": "<<a<<endl;
    cout<<"Comparacion de "<<str1<<" y "<<str3<<": "<<b<<endl;
    cout<<"Comparacion de "<<str3<<" y "<<str1<<": "<<c<<endl;

    return 0;
}

int compararCadenas(const char* str1, const char* str2){
    // Se declara un indice
    int i = 0;

    // Se recorre la cadena hasta su longitud mas uno 
    for (i; i <= strlen(str1); i++)
    {
        // Si se recorre toda la cadena sin hacer 'break', significa que ambas cadenas son iguales 
        if (i==strlen(str1))
        {
            // Como son iguales, retorna 0
            return 0;
        }
        // Si las cadenas son distintas en algun caracter, se hace 'break'
        if (*(str1 + i) != *(str2 + i))
        {
            break;
        }
        
    }if (*(str1 + i) < *(str2 + i)) // Si dicho caracter distinto de la primera cadena es menor que el caracter de la segunda cadena, retorna -1
    {
        return -1;
    }else // Caso contrario, retorna 1
    {
        return 1;
    }
}