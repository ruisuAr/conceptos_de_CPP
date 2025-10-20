// Estructura del lenguaje C++: Actividad 4 - Evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <iostream>
using namespace std;

// función para imprimir la tabla de multiplicar
void tablaMultiplicar(int num) {
    for (int i = 1; i <= 9; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int number;
    int tabla{0};

    cout << "Tablas de multiplicaciOn:" << endl;
    // ciclo que imprime las tablas del 1 al 9
    while (tabla < 9) {
        cout << "Tabla del " << tabla << endl;
        tabla++;
    }

    cout << "\nSeleccione una tabla de multiplicaciOn: ";
    cin >> number;
    tablaMultiplicar(number);

    cout << "Desarrollado por Luis Manuel Ariza\n" << endl;

    return 0;
}