// Conceptualization del lenguaje C++: Actividad 4 - Evidencia 2
// Desarrollado por Luis Ariza
/*
Hacer un algoritmo que permita calcular el promedio de notas de un estudiante
y que permita ingresar notas hasta que el usuario decida parar. Las notas deben
estar entre 0.0 y 5.0, si se ingresa una nota fuera de este rango no sera valida.
*/

#include <iostream>
using namespace std;

int main() {
  int op, total_notas;
  float sum_notas, promedio;

  cout << "Recuerde que las notas deben estar entre 0.0 y 5.0" << endl;

  int i = 0;
  do {
    float nota;
    cout << "Ingrese la nota " << i + 1 << ": ";
    cin >> nota;

    if (nota < 0 || nota > 5) {
      cout << "Nota no válida. Debe estar entre 0.0 y 5.0." << endl;
      continue;  // Pide la nota nuevamente
    }

    sum_notas += nota;
    i++;

    cout << "Presione '1' para continuar, '0' para saber promedio: ";
    cin >> op;

  } while (op == 1);

  // Calcular el promedio
  promedio = sum_notas / i;
  cout << "El promedio es: " << promedio << endl;

  return 0;
}