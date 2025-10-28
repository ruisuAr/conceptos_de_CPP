// Uso de clases, arreglos y matrices dinámicas en C++

#include "3.2.Sistema_Ventas_class.h"
using namespace std;

int main() {
    int cantidad;

    cout << "SISTEMA DE VENTAS\n" << endl;
    cout << "Cantidad de vendedores: ";
    cin >> cantidad;

    while (cantidad <= 0) {
        cout << "Debe ser mayor a 0: ";
        cin >> cantidad;
    }

    // Crear objeto dinámicamente (con puntero)
    SistemaVentas* sistema = new SistemaVentas(cantidad);

    sistema->capturarDatos();
    system("clear");  // Limpiar pantalla. En Windows usar "cls"

    sistema->generarInforme();
    delete sistema;  // Liberar memoria del objeto (llama al destructor)

    return 0;
}