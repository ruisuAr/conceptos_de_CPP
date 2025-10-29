// Uso de clases, arreglos y matrices dinámicas en C++

#include "3.2.Sistema_Ventas_class.h"
using namespace std;

namespace ventas {

SistemaVentas::SistemaVentas(int cantidad) : cantidadVendedores(cantidad) {
    nombresVendedores = new std::string[cantidadVendedores];

    // Crear matriz 2D: primero el arreglo de filas
    ventasMensuales = new double*[cantidadVendedores];
    // Luego cada fila (columnas para cada vendedor)
    for (int i{0}; i < cantidadVendedores; i++) {
        ventasMensuales[i] = new double[MESES];
    }
}

void SistemaVentas::tomarDatos() {
    for (int i{0}; i < cantidadVendedores; i++) {
        cout << "\nNombre del vendedor " << (i + 1) << ": ";
        cin.ignore();  // Limpia el buffer del enter anterior
        getline(cin, nombresVendedores[i]);

        for (int mes{0}; mes < MESES; mes++) {
            cout << "Mes " << (mes + 1) << ": $";
            cin >> ventasMensuales[i][mes];

            while (ventasMensuales[i][mes] < 0) {
                cout << "Valor debe ser positivo: $";
                cin >> ventasMensuales[i][mes];
            }
        }
    }
}

void SistemaVentas::generarInforme() {
    // fixed: muestra decimales fijos, setprecision(2): 2 decimales
    cout << fixed << setprecision(2);
    cout << "INFORME DE VENTAS\n" << endl;

    // setw(N): establece ancho de columna en N caracteres
    // left: alinea texto a la izquierda
    // right: alinea números a la derecha
    cout << left << setw(15) << "Vendedor" << right << setw(15) << "Mes 1"
         << setw(15) << "Mes 2" << setw(15) << "Mes 3" << setw(15) << "Mes 4"
         << setw(15) << "Promedio" << endl;

    // string(90, '-'): crea string con 90 guiones como línea divisoria
    cout << string(90, '-') << endl;

    // Imprimir datos de cada vendedor
    for (int i{0}; i < cantidadVendedores; i++) {
        cout << left << setw(15) << nombresVendedores[i];

        // Ventas mensuales
        for (int mes{0}; mes < MESES; mes++) {
            cout << right << setw(15) << ventasMensuales[i][mes];
        }

        // Promedio individual al final de la fila
        cout << setw(15) << calcularPromedioVendedor(i) << endl;
    }

    cout << string(90, '-') << endl;

    // Fila del promedio general (ocupa 75 chars, promedio en últimos 15)
    cout << left << setw(75) << "Promedio General" << right << setw(15)
         << calcularPromedioGeneral() << "\n"
         << endl;
}

}  // namespace ventas

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
    ventas::SistemaVentas* sistema = new ventas::SistemaVentas(cantidad);

    sistema->tomarDatos();
    system("clear");  // Limpiar pantalla. En Windows usar "cls"

    sistema->generarInforme();
    delete sistema;  // Liberar memoria del objeto (llama al destructor)

    return 0;
}