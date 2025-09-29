#include<iostream>
using namespace std;

int main(){

    // Se declaran los punteros a int, float y char
    int* i_ptr = nullptr;
    float* f_ptr = nullptr;
    char* c_ptr = nullptr;

    // Se asignan los valores a las variables originales
    int i = 5;
    float f = 3.14;
    char c = 'a';

    // Se asocia los punteros a las variables
    i_ptr = &i;
    f_ptr = &f;
    c_ptr = &c;

    // Se muestran los valores y direcciones de las variables
    cout<<endl<<"valor de entero: "<<i<<endl;
    cout<<"valor de float: "<<f<<endl;
    cout<<"valor de char: "<<c<<endl;

    cout<<endl<<"direccion de entero: "<<i_ptr<<endl;
    cout<<"direccion de float: "<<f_ptr<<endl;
    cout<<"direccion de char: "<<c_ptr<<endl;

    return 0;
}