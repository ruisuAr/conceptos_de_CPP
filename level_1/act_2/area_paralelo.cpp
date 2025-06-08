// Calcular area de un paralelogramo
// Desarrollado por Luis Manuel Ariza
// Estructura del lenguaje C++: Actividad 2 - Evidencia 1

#include <iostream>
using namespace std;

int main() {
  float base, altura, area;

  cout << "Ingresa la base del paralelogramo" << endl;
  cin >> base;
  cout << "Ingresa la altura del paralelogramo" << endl;
  cin >> altura;

  area = base * altura;  // Ecuación para definir el area del paralelogramo
  system("clear");       // Limpia la consola

  cout << "PARALELOGRAMO \n El area es: " << area << endl;
  cout << "LUIS MANUEL ARIZA PINEDA" << endl;

  return 0;
}