// Calcular area de un rectángulo
// Desarrollado por Luis Manuel Ariza Pineda
// Estructura del lenguaje C++: Actividad 2 - Evidencia 1

#include <iostream>
using namespace std;

int main() {
  float base, altura, area;

  cout << "Ingresa la base del rectAngulo" << endl;
  cin >> base;
  cout << "Ingresa la altura del rectAngulo" << endl;
  cin >> altura;

  area = base * altura;  // Ecuación para definir el area del rectángulo
  system("clear");       // Limpia la consola

  cout << "RECTaNGULO \n El area es: " << area << endl;
  cout << "LUIS MANUEL ARIZA PINEDA" << endl;

  return 0;
}