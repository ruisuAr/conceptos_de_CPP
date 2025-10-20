// Conceptualization del lenguaje C++: Actividad 2 - Evidencia 2
// Desarrollado por Luis Ariza
// Este programa genera una tabla de multiplicación para un número dado
// hasta un límite especificado por el usuario.

#include <iostream>
using namespace std;

// n1 es el número a multiplicar, n2 es el límite de la tabla
void tablaMultiplicacion(int n1, int n2) {
    for (int i = 1; i <= n2; i++) {
        cout << i << " x " << n1 << " = " << i * n1 << endl;
    }
}

int main() {
    int num1, num2;

    cout << "Ingresa el numero que quieres multiplicar" << endl;
    cin >> num1;
    cout << "Ingresa con cuantos nUmeros deseas multiplicarlo" << endl;
    cin >> num2;

    tablaMultiplicacion(num1, num2);
    return 0;
}
