// Programa 1:
// Calcular y mostrar en pantalla el costo de envío de productos
// Módulo y estructura del lenguaje C++: Actividad 4 - Evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <iostream>
using namespace std;

// Prototipo de la función
int calcularCostoEnvio(int peso);

int main() {
  int peso;

  cout << "Programa #1:" << endl;
  cout << "CALCULAR EL COSTE DE ENVIO DE UN PAQUETE\n" << endl;
  cout << "Ingrese el peso del paquete en kilogramos: ";
  cin >> peso;

  int costo = calcularCostoEnvio(peso);
  cout << "El costo total del envío es de: $" << costo << endl;

  return 0;
}

// Función que calcula el costo de envío según el peso
int calcularCostoEnvio(int peso) {
  int costo = 0;
  // Validación del peso
  if (peso > 0 && peso <= 10) {
    costo = 28000;
  } else if (peso > 10 && peso <= 30) {
    costo = 34000 + ((peso - 10) * 1600);
  } else if (peso >= 50) {
    costo = 60000 + ((peso - 50) * 1900);
  }

  return costo;
}