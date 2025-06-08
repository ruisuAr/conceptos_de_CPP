// Conceptualization del lenguaje C++: Actividad 2 - Evidencia 2.1
// Desarrollado por Luis Ariza
// Programa que calcula la aceleración de un vehículo

#include <iostream>
using namespace std;

int main() {
  int a, vi, vf, t;

  cout << "Ingresa la velocidad inicial en m/s" << endl;
  cin >> vi;
  cout << "Ingresa la velocidad final en m/s" << endl;
  cin >> vf;
  cout << "Ingresa el tiempo en segundos" << endl;
  cin >> t;
  // Formula para calcular la aceleración
  a = (vf - vi) / t;

  cout << "La aceleracion del vehiculo es de: " << a << "m/s^2" << endl;

  return 0;
}
