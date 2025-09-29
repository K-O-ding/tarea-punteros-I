#include<iostream>
#include<cstdlib>
#include<ctime>
#include<chrono>
using namespace std;

// Ambas funciones multiplican por dos a los valores del arreglo. 
// Prototipo de funcion por copia
void modificarPorCopia(int arr[], size_t size);

// Prototipo de funcion por puntero
void modificarPorPuntero(int* arr, size_t size);

int main(){

    // Se inicializa la semilla
    srand(time(0));

    // Se declara el tamaño del arreglo
    const size_t n = 1000;

    // Se declaran dos arreglos de tamaño 'n'
    int arr[n];
    int arr_para_puntero[n];

    // Se llena el arreglo con valores aleatorios del 1 al 100
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
        // Se copian los valores de 'arr' al segundo arreglo
        arr_para_puntero[i] = arr[i];
    }

    // #### Se mide el tiempo de la funcion por copia ####
    // Se toma el tiempo de inicio
    auto inicio_copia = chrono::high_resolution_clock::now();

    // Se ejecuta la funcion
    modificarPorCopia(arr, n);

    // Se toma el tiempo final
    auto final_copia = chrono::high_resolution_clock::now();

    // Se calcula la duracion y se convierte a microsegundos
    auto duracion_copia = chrono::duration_cast<chrono::microseconds>(final_copia - inicio_copia);

    cout<<"\nTiempo de modificacion por copia: "<<duracion_copia.count()<<" microsegundos."<<endl;


    // #### Se mide el tiempo de la funcion por puntero ####
    // Se toma el tiempo de inicio
    auto inicio_ptr = chrono::high_resolution_clock::now();

    // Se ejecuta la funcion
    modificarPorPuntero(arr_para_puntero, n);

    // Se toma el tiempo final
    auto final_ptr = chrono::high_resolution_clock::now();

    // Se calcula la duracion y se convierte a microsegundos
    auto duracion_ptr = chrono::duration_cast<chrono::microseconds>(final_ptr - inicio_ptr);

    cout<<"Tiempo de modificacion por puntero: "<<duracion_ptr.count()<<" microsegundos."<<endl;

    return 0;
}

void modificarPorCopia(int arr[], size_t size){

    // Se declara un arreglo para que almacene los valores copiados
    int arr_local[size];

    // Se copian los valores
    for (size_t i = 0; i < size; i++)
    {
        arr_local[i] = arr[i];
    }

    // Se multiplica por dos a cada valor 
    for (size_t i = 0; i < size; i++)
    {
        arr_local[i] = 2 * arr_local[i]; 
    }

}

void modificarPorPuntero(int* arr, size_t size){
    // Se multiplica por dos a cada valor 
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i]; 
    }
}