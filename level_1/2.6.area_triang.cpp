// Estructura del lenguaje C++
// Calcular area de un triángulo

#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    cout << "Ingresa la base del triAngulo" << endl;
    cin >> base;
    cout << "Ingresa la altura del triAngulo" << endl;
    cin >> altura;

    area = (base * altura) / 2;
    system("clear");  // Limpia la consola

    cout << "TRIaNGULO \n El area es: " << area << endl;
    cout << "LUIS MANUEL ARIZA PINEDA" << endl;

    return 0;
}