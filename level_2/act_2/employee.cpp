// Módulo de empleados
// Módulo y estructura del lenguaje C++: Actividad 2 - Evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <cstdlib>
#include <iostream>
using namespace std;

// Módulo de empleados
int main() {
    float productos[50][3], no_productos, respuesta;

    do {
        cout << "Digite cuantos productos desea calcular: ";
        cin >> no_productos;

        for (int i = 0; i < no_productos; i++) {
            cout << "Ingrese la cantidad del producto " << i + 1 << ": ";
            cin >> productos[i][0];
            cout << "ingrese el valor unitario: ";
            cin >> productos[i][1];
            cout << "Ingrese el porcentaje de descuento: ";
            cin >> productos[i][2];
            cout << "\n";
        }
        system("clear");  // Use "cls" for Windows

        cout << "Lista de datos de productos:\n";
        for (int i = 0; i < no_productos; i++) {
            for (int j = 0; j < 3; j++) {
                cout << productos[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "Presiona '0' si deseas calcular el total de los productos"
             << endl;
        cout << "Presiona '1' si deseas generar una nueva lista\n(0/1): ";
        cin >> respuesta;
        if (respuesta == 0) {
            cout << "\nTotales de productos:" << endl;

            for (int i = 0; i < no_productos; i++) {
                cout << (productos[i][0] * productos[i][1]) *
                            (1 - productos[i][2] / 100)
                     << endl;
            }
            cout << "\nGracias por preferirnos ¡Que tenga un excelente dia!"
                 << endl;
        }
    } while (respuesta == 1);
}
