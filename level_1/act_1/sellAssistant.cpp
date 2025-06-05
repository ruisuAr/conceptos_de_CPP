// Asistente de venta de Sofia
// Actividad 1 - evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <iostream>
using namespace std;

int main() {
  int refZapato, tallaZapato, costoZapato, precioVentaZapato;
  char descripcionZapato[50], disponibilidadZapato;

  cout << "ADMINISTRAR VENTAS DE ZAPATOS" << endl;
  cout << "==============================" << endl;
  cout << "Digite la referencia del zapato..." << endl;
  cin >> refZapato;
  cin.ignore();  // Limpiar el buffer de entrada
  cout << "Digite una descripcion del zapato..." << endl;
  cin.getline(descripcionZapato, 50);
  cout << "Digite la talla del zapato..." << endl;
  cin >> tallaZapato;
  cout << "Digite la S o N si esta disponible o no para la venta..." << endl;
  cin >> disponibilidadZapato;
  cout << "Digite el costo del zapato..." << endl;
  cin >> costoZapato;
  cout << "Digite el precio de venta del zapato..." << endl;
  cin >> precioVentaZapato;

  cout << "\nLOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;
  cout << "=========================================" << endl;
  cout << "REFERENCIA: " << refZapato << endl;
  cout << "DESCRIPCION: " << descripcionZapato << endl;
  cout << "TALLA: " << tallaZapato << endl;
  cout << "DISPONIBILIDAD: "
       << (disponibilidadZapato == 'S' || disponibilidadZapato == 's'
               ? "Disponible"
               : "No disponible")
       << endl;
  cout << "COSTO: $" << costoZapato << endl;
  cout << "PRECIO DE VENTA: $" << precioVentaZapato << "\n" << endl;

  cout << "=*= Desarrollado por LUIS MANUEL ARIZA PINEDA =*=" << endl;

  return 0;
}