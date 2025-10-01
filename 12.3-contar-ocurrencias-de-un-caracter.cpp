#include<iostream>
#include<cstring>
using namespace std;

int contarCaracter(const char* str, char objetivo);

int main(){

    char str[] = "ferrocarrilero"; // palabra con 5 r's
    char objetivo = 'r';

    int num_apariciones = contarCaracter(str, objetivo);

    cout<<"\nEn la palabra ferrocarrilero aparece "<<num_apariciones<<" veces el caracter '"<<objetivo<<"'"<<endl;
    return 0;
}

int contarCaracter(const char* str, char objetivo){
    int counter=0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (*(str + i) == objetivo)
        {
            counter += 1;
        }
    }
    
    return counter;
}