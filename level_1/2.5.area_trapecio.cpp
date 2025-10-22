// Estructura del lenguaje C++
// Calcular area de un trapecio

#include <iostream>
using namespace std;

int main() {
    float baseMayor, baseMenor, altura, area;

    cout << "Ingresa la base mayor del trapecio" << endl;
    cin >> baseMayor;
    cout << "Ingresa la base menor del trapecio" << endl;
    cin >> baseMenor;
    cout << "Ingresa la altura del trapecio" << endl;
    cin >> altura;
    // Ecuación para definir el area del trapecio
    area = ((baseMayor * baseMenor) / 2) * altura;
    system("clear");  // Limpia la consola

    cout << "TRAPECIO \n El area es: " << area << endl;
    cout << "LUIS MANUEL ARIZA PINEDA" << endl;

    return 0;
}