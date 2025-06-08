// Metodología de la programación: Actividad 3 - Evidencia 1
// Desarrollado por Luis Ariza
// Hacer un algoritmo que permita comparar dos números y mostrar cuál es mayor,
// menor o si son iguales.

#include <iostream>
using namespace std;

int main() {
  float num1, num2;

  cout << "Ingresa el primer numero: ";
  cin >> num1;
  cout << "Ingresa el segundo numero: ";
  cin >> num2;

  if (num1 == num2)
    cout << "Ambos números son iguales" << endl;
  else if (num1 > num2)
    cout << num1 << " es mayor y " << num2 << " es menor" << endl;
  else
    cout << num1 << " es menor y " << num2 << " es mayor" << endl;
}