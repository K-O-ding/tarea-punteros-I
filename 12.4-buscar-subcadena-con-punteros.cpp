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
    
}

void imprimirPosicion(const char* sub_str, int pos){
    if (pos != -1)
    {
        cout<<"\nLa subcadena '"<<sub_str<<"' se encontro en la posicion "<<pos<<endl;
    }else
    {
        cout<<"\nNo se encontro la subcadena '"<<sub_str<<"'";
    }
}