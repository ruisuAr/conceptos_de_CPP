// Metodología de la programación: Actividad 3 - Evidencia 1
// Desarrollado por Luis Ariza
// Hacer un algoritmo que permita determinar si un número es divisible
// por 5.

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Ingrese un número: ";
    cin >> number;

    if (number % 5 == 0)
        cout << number << " es divisible por 5" << endl;
    else
        cout << number << " no es divisible por 5" << endl;
}