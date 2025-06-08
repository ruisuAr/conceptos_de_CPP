// Metodología de la programación: Actividad 4 - Evidencia 2
// Desarrollado por Luis Ariza
/*
Se requiere un programa que establezca un protocolo de carga de
20 camiones diarios:

●	Capacidad de carga de camiones: entre 18000 kg y 28000 kg
●	Sacas de cal: entre 3000 kg y 9000 kg

Cada camión debe cargar a su máxima capacidad, si la siguiente saca excede el
límite de capacidad el camión debe partir y asi hasta completar 20 camiones.
*/

#include <iostream>
using namespace std;

int main() {
  float cap_camion, acum_sacas, peso_saca;

  cout << "Digite el peso de la primera saca: ";
  cin >> peso_saca;

  for (int i = 1; i <= 20; i++) {
    cout << "Digite la capacidad del camion " << i << ": ";
    cin >> cap_camion;

    acum_sacas = 0;  // Reiniciar acumulador de sacas para cada camión

    while (acum_sacas + peso_saca <= cap_camion) {
      acum_sacas += peso_saca;  // Acumular el peso de la saca

      cout << "Digite el peso de la siguiente saca: ";
      cin >> peso_saca;
    }
    cout << "El camion numero " << i << " se ha despachado" << endl;
  }
  cout << "Se completo la producción del dia, se despacharon 20 camiones";

  return 0;
}