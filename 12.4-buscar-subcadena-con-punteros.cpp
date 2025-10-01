#include<iostream>
#include<cstring>
using namespace std;

// Prototipo de funcion para buscar subcadena
int buscarSubcadena(const char* str, const char* sub_str);

// Prototipo de funcion auxiliar para imprimir si la subcadena se encontro o no
void imprimirPosicion(const char* sub_str, int pos);

int main(){
    // Declaramos la cadena de prueba
    char str[] = "estamos";

    // Declaramos las subcadenas a buscar
    char sub_str1[] = "amo";
    char sub_str2[] = "zzz";

    // Llamamos a la funcion principal y almacenamos las posiciones en variables tipo int
    int pos_1 = buscarSubcadena(str, sub_str1);
    int pos_2 = buscarSubcadena(str, sub_str2);

    // Llamamos a la funcion que imprime que si se encontraron (o no) las subcadenas 
    imprimirPosicion(sub_str1, pos_1);
    imprimirPosicion(sub_str2, pos_2);

    return 0;
}

int buscarSubcadena(const char* str, const char* sub_str){
    // Se declara un entero que almacena el tamaño de la subcadena
    int tam_sub = strlen(sub_str);
    // Se declara un contador (cuenta cuantas letras coinciden en ambas cadenas)
    int k = 0;

    // Se recorre la cadena principal desde el inicio hasta la posicion final - tam_sub + 1
    for (int i = 0; i < strlen(str)- tam_sub + 1; i++)
    {
        // Se recorre cada elemento de la cadena principal hasta 'tam_sub' veces
        for (int j = 0; j < tam_sub; j++)
        {
            // Se compara cada elemento de ambas cadenas hasta 'tam_sub' veces
            if (*(str + i + j) == *(sub_str + j))
            {
                // Si los caracteres coinciden, se incrementa el contador
                k++;
            }
            if (k == tam_sub)
            {
                // Si el contador es igual al tamaño de la subcadena, retorna la posicion del inicio de la subcadena (i)
                return i;
            }
        }
        // Si el contador no llega a ser igual a 'tam_sub', se reinicia su valor a 0
        k=0;
    }

    // Si no se encontro la subcadena, retorna -1
    return -1;
}

void imprimirPosicion(const char* sub_str, int pos){
    if (pos != -1)
    {
        cout<<"\nLa subcadena '"<<sub_str<<"' se encontro en la posicion "<<pos<<endl;
    }else
    {
        cout<<"\nNo se encontro la subcadena '"<<sub_str<<"'"<<endl;
    }
}