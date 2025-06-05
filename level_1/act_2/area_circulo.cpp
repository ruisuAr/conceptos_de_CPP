// Calcular area de un círculo
// Desarrollado por Luis Manuel Ariza

#include <math.h>

#include <iostream>
using namespace std;

int main() {
  float PI{M_PI}, radio, area;

  cout << "Ingresa el radio del cIrculo" << endl;
  cin >> radio;
  // Ecuación para definir el area del círculo
  area = PI * pow(radio, 2);
  system("clear");  // Limpia la consola

  cout << "CiRCULO \n El area es: " << area << endl;
  cout << "LUIS MANUEL ARIZA PINEDA" << endl;

  return 0;
}