// Módulo de clientes
// Módulo y estructura del lenguaje C++: Actividad 2 - Evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int no_productos;
    string productos[50];
    char respuesta;

    do {
        cout << "Digite cuantos productos desea agregar: ";
        cin >> no_productos;
        cin.ignore();  // Limpiar el buffer de entrada

        for (int i = 0; i < no_productos; i++) {
            cout << "Ingrese el producto " << i + 1 << ": ";
            getline(cin, productos[i]);
        }
        system("clear");  // Use "cls" for Windows

        cout << "Lista de productos:\n";
        for (int i = 0; i < no_productos; i++) {
            cout << productos[i] << endl;
        }
        cout << "\n";

        cout << "Está satisfecho con la lista realizada? (s/n): ";
        cin >> respuesta;
        if (respuesta == 's' || respuesta == 'S') {
            system("clear");
            cout << "Gracias por su compra ¡Que tenga un excelente dia!"
                 << endl;
        }

    } while (respuesta == 'n' || respuesta == 'N');
}