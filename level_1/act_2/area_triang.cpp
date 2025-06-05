// Calcular area de un triángulo
// Desarrollado por Luis Manuel Ariza Pineda

#include <iostream>
using namespace std;

int main() {
  float base, altura, area;

  cout << "Ingresa la base del triAngulo" << endl;
  cin >> base;
  cout << "Ingresa la altura del triAngulo" << endl;
  cin >> altura;

  area = (base * altura) / 2;  // Ecuación para definir el area del triángulo
  system("clear");             // Limpia la consola

  cout << "TRIaNGULO \n El area es: " << area << endl;
  cout << "LUIS MANUEL ARIZA PINEDA" << endl;

  return 0;
}