// Conceptualization del lenguaje C++
// Programa que determina el grupo etario de un hijo según su edad

#include <iostream>
using namespace std;

int main() {
    int edad = 0;

    cout << "Ingrese la edad de su hijo: ";
    cin >> edad;

    if (edad >= 0 && edad <= 6) {
        cout << "Su hijo pertenece al grupo primera infancia";
    } else if (edad > 6 && edad <= 12) {
        cout << "Su hijo pertenece al grupo segunda infancia";
    } else if (edad > 12 && edad <= 18) {
        cout << "Su hijo pertenece al grupo adolescente";
    } else {
        cout << "Rango de edad no permitido";
    }

    return 0;
}
