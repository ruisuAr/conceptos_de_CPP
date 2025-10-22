// Conceptualization del lenguaje C++
/*
Este programa solicita al usuario ingresar un número de notas y luego
el programa calcula el promedio de las notas ingresadas y determina si
el estudiante está aprobado o reprobado. Se asegura de que las notas
estén en el rango válido (0.0 a 5.0). Si una nota no es válida, se pide
nuevamente sin incrementar el contador de notas.
*/

#include <iostream>
using namespace std;

int main() {
    int no_notas;
    float sum_notas, promedio;

    cout << "¿Cuantas notas va a ingresar?" << endl;
    cin >> no_notas;
    cout << "Recuerde que las notas deben estar entre 0.0 y 5.0" << endl;

    int i = 1;
    while (i <= no_notas) {
        float nota;
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;

        if (nota < 0 || nota > 5) {
            cout << "Nota no válida. Debe estar entre 0.0 y 5.0." << endl;
            continue;  // Pide la nota nuevamente
        }

        sum_notas += nota;
        i++;
    }
    // Calcular el promedio
    promedio = sum_notas / no_notas;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}