// Estructura del lenguaje C++
// Asistente de venta de Sofia, version 3

#include <iostream>
using namespace std;

int main() {
    int talla, cantidad{0}, costo, costoTotal, precioVenta, precioTotal,
        utilidad, utilidadTotal;
    float porcentajeUtilidad;
    char referencia[15], descripcion[40], disponibilidad, tipo;

    cout << "ADMINISTRAR VENTAS DE ZAPATOS" << endl;
    cout << "==============================" << endl;
    cout << "Digite la referencia del zapato..." << endl;
    cin.getline(referencia, 15);
    cout << "Digite una descripcion del zapato..." << endl;
    cin.getline(descripcion, 40);
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
    // Calcular la utilidad, precio de venta, y porcentaje de utilidad
    if (costo <= 30000) {
        tipo = 'A';              // Tipo A para costo <= 30,000
        utilidad = costo * 0.5;  // Utilidad del 50% del costo
    } else if (costo > 30000 && costo <= 60000) {
        tipo = 'B';              // Tipo B para costo entre 30,001 y 60,000
        utilidad = costo * 0.4;  // Utilidad del 40% del costo
    } else if (costo > 60000) {
        tipo = 'C';              // Tipo C para costo > 60,000
        utilidad = costo * 0.3;  // Utilidad del 30% del costo
    }
    // Porcentaje de utilidad se calcula como (parte * 100) / total
    // En este caso, parte es la utilidad y total es el costo
    porcentajeUtilidad = (utilidad * 100) / costo;
    precioVenta = costo + utilidad;
    costoTotal = costo * cantidad;
    precioTotal = precioVenta * cantidad;
    utilidadTotal = utilidad * cantidad;

    // Limpiar la consola
    system("clear");
    // Mostrar los datos ingresados y calculados
    cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;
    cout << "=========================================\n" << endl;
    cout << "REFERENCIA: " << referencia << endl;
    cout << "TIPO: " << tipo << endl;
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