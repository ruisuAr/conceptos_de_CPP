// Módulo y estructura del lenguaje C++
// Programa 3:
// Aplicación de arreglos como parámetro de funciones

#include <cmath>
#include <iostream>
#include <limits>  // asegurarse de incluir en el archivo real
using namespace std;

// Prototipo de la funciones
void agregarElementos(int*, size_t);
void mostrarElementos(int*, size_t);

int main() {
    size_t cant_elementos;

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

void agregarElementos(int* arreglo, size_t cant_elementos) {
    if (!arreglo) return;  // prevenir nullptr

    for (size_t i{0}; i < cant_elementos; ++i) {
        std::cout << "Elemento " << (i + 1) << ": ";
        if (!(std::cin >> arreglo[i])) {
            std::cerr << "Entrada inválida. Reinserte el valor.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;  // repetir la posición
        }
    }
}

void mostrarElementos(int* arreglo, size_t cant_elementos) {
    for (size_t i{0}; i < cant_elementos; i++) {
        cout << "Elemento " << (i + 1) << ": " << pow(arreglo[i], 3) << endl;
    }
}