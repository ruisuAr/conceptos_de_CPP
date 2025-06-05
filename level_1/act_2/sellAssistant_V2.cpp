// Asistente de venta de Sofia
// Actividad 2 - evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <iostream>
using namespace std;

int main() {
  int referencia, talla, cantidad{0}, costo, costoTotal, precioVenta,
      precioTotal, utilidad, utilidadTotal;
  float porcentajeUtilidad;
  char descripcion[50], disponibilidad;
  // Verificamos que la disponibilidad sea S o N

  cout << "ADMINISTRAR VENTAS DE ZAPATOS" << endl;
  cout << "==============================" << endl;
  cout << "Digite la referencia del zapato..." << endl;
  cin >> referencia;
  cin.ignore();  // Limpiar el buffer de entrada ('cin' anterior a getline)
  cout << "Digite una descripcion del zapato..." << endl;
  cin.getline(descripcion, 50);
  cout << "Digite la talla del zapato..." << endl;
  cin >> talla;
  cout << "Digite la S o N si esta disponible o no para la venta..." << endl;
  cin >> disponibilidad;
  if (disponibilidad == 'S' || disponibilidad == 's') {
    cout << "Digite cuantos zapatos tiene disponible..." << endl;
    cin >> cantidad;
  }
  cout << "Digite el costo del zapato..." << endl;
  cin >> costo;
  cout << "Digite el precio de venta del zapato..." << endl;
  cin >> precioVenta;
  // Calcular el costo total, precio total, utilidad y porcentaje de utilidad
  costoTotal = costo * cantidad;
  precioTotal = precioVenta * cantidad;
  utilidad = precioVenta - costo;
  utilidadTotal = utilidad * cantidad;
  // Porcentaje de utilidad se calcula como (parte * 100) / total
  // En este caso, parte es la utilidad y total es el precio de venta
  porcentajeUtilidad = (utilidad * 100) / precioVenta;
  // Limpiar la consola
  system("clear");
  // Mostrar los datos ingresados y calculados
  cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;
  cout << "=========================================\n" << endl;
  cout << "REFERENCIA: " << referencia << endl;
  cout << "DESCRIPCION: " << descripcion << endl;
  cout << "TALLA: " << talla << endl;
  cout << "DISPONIBILIDAD: "
       << (disponibilidad == 'S' || disponibilidad == 's' ? "Disponible"
                                                          : "No disponible")
       << endl;
  cout << "CANTIDAD DE ZAPATOS: " << cantidad << endl;
  cout << "COSTO UNIDAD: $" << costo << endl;
  cout << "COSTO TOTAL: $" << costoTotal << endl;
  cout << "PRECIO UNIDAD: $" << precioVenta << endl;
  cout << "PRECIO TOTAL DE " << cantidad << " UNIDADES: $" << precioTotal
       << endl;
  cout << "UTILIDAD POR UNIDAD: $" << utilidad << endl;
  cout << "UTILIDAD TOTAL: $" << utilidadTotal << endl;
  cout << "PORCENTAJE DE UTILIDAD: " << porcentajeUtilidad << "%\n" << endl;

  cout << "LUIS MANUEL ARIZA PINEDA";

  return 0;
}