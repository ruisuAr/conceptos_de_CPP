// Estructura del lenguaje C++
// Calcular area de un rectángulo

#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    cout << "Ingresa la base del rectAngulo" << endl;
    cin >> base;
    cout << "Ingresa la altura del rectAngulo" << endl;
    cin >> altura;

    area = base * altura;
    system("clear");  // Limpia la consola

    cout << "RECTaNGULO \n El area es: " << area << endl;
    cout << "LUIS MANUEL ARIZA PINEDA" << endl;

    return 0;
}