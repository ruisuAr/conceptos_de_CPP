// Estructura del lenguaje C++
// Calcular area de un paralelogramo

#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    cout << "Ingresa la base del paralelogramo" << endl;
    cin >> base;
    cout << "Ingresa la altura del paralelogramo" << endl;
    cin >> altura;

    area = base * altura;
    system("clear");  // Limpia la consola

    cout << "PARALELOGRAMO \n El area es: " << area << endl;
    cout << "LUIS MANUEL ARIZA PINEDA" << endl;

    return 0;
}