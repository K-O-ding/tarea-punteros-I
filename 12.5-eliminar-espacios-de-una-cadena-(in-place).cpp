#include<iostream>
#include<cstring>
using namespace std;

// Prototipo de funcion
void eliminarEspacios(char* str);

int main(){
    char str[] = "e j e r c i c i o s";

    eliminarEspacios(str);

    cout<<"\nLa cadena sin espacios es: "<<str<<endl;
    return 0;
}

void eliminarEspacios(char* str){
    char temp;

    for (int i = 0; i < strlen(str); i++)
    {
        if (*(str + i) == ' ')
        {
            for (int j = i; j < strlen(str); j++)
            {
                if (*(str + j) != ' ')
                {
                    temp = *(str + i);
                    *(str + i) = *(str + j);
                    *(str + j) = temp;
                    i++;
                }
            }
        }
    }
}