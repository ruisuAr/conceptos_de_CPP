// Programa 2:
// Calcular el salario mensual que un empleado recibirá el próximo año
// Módulo y estructura del lenguaje C++: Actividad 4 - Evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <iostream>
using namespace std;

// Prototipo de la función
int calcularSalarioAnual(int&, int&);

int main() {
    int salario_anual, antiguedad;

    cout << "Programa #2:" << endl;
    cout << "CALCULAR EL SALARIO MENSUAL PARA EL PROXIMO AÑO\n" << endl;
    cout << "Digite el valor del SALARIO ANUAL devengado actualmente: ";
    cin >> salario_anual;

    cout << "Digite los AÑOS DE ANTIGUEDAD que tiene en la empresa: ";
    cin >> antiguedad;

    system("clear");  // use "cls" if on Windows

    cout << "El SALARIO MENSUAL ACTUAL es: $" << salario_anual / 12 << endl;
    // Llamada a la función para calcular el nuevo salario anual
    calcularSalarioAnual(salario_anual, antiguedad);
    cout << "El SALARIO MENSUAL del próximo año es: $" << salario_anual / 12
         << endl;

    return 0;
}

int calcularSalarioAnual(int& salario_anual, int& antiguedad) {
    // Validación del salario anual
    if (antiguedad >= 0 || antiguedad < 5) {
        salario_anual += 0.06 * salario_anual;
    } else if (antiguedad >= 5 || antiguedad < 10) {
        salario_anual += 0.08 * salario_anual;
    } else if (antiguedad > 10) {
        salario_anual += 0.10 * salario_anual;
    } else {
        cout << "Antiguedad no válida." << endl;
        return 0;  // Retorna 0 si la antigüedad es inválida
    }

    return salario_anual;
}