// Metodología de la programación: Actividad 3 - Evidencia 1
// Desarrollado por Luis Ariza
// Hacer un algoritmo que permita determinar si un número es par o
// impar.

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Ingrese un número: ";
    cin >> number;

    if (number % 2 == 0)
        cout << number << " es par" << endl;
    else
        cout << number << " es impar" << endl;
}