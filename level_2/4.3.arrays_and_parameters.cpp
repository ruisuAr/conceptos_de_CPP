// Módulo y estructura del lenguaje C++
// Programa 3:
// Aplicación de arreglos como parámetro de funciones

#include <cmath>
#include <iostream>
using namespace std;

// Prototipo de la funciones
void agregarElementos(int*, int);
void mostrarElementos(int*, int);

int main() {
    int cant_elementos;

    cout << "Programa #3:" << endl;
    cout << "APLICAR ARREGLOS COMO PARAMETRO DE FUNCIONES\n" << endl;
    cout << "Digite la cantidad de elementos que tendra el arreglo: ";
    cin >> cant_elementos;
    int lista[cant_elementos];

    cout << "\nDIGITE LOS " << cant_elementos << " ELEMENTOS DEL ARREGLO"
         << endl;
    agregarElementos(lista, cant_elementos);

    system("clear");  // use "cls" if on Windows

    cout << "Lista de elementos del arreglo elevados al cubo: " << endl;
    mostrarElementos(lista, cant_elementos);

    return 0;
}

void agregarElementos(int* arreglo, int cant_elementos) {
    for (int i = 0; i < cant_elementos; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> arreglo[i];
    }
}

void mostrarElementos(int* arreglo, int cant_elementos) {
    for (int i = 0; i < cant_elementos; i++) {
        cout << "Elemento " << (i + 1) << ": " << pow(arreglo[i], 3) << endl;
    }
}