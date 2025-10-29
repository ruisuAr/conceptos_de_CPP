#pragma once
#include <iostream>
#include <string>
// <iomanip>: manipuladores de E/S (std::setw, std::setprecision, std::fixed,
// etc) usados para formatear la salida en el informe de ventas
#include <iomanip>

namespace ventas {

class SistemaVentas {
   private:
    std::string* nombresVendedores;  // Arreglo dinámico de strings
    double** ventasMensuales;        // Matriz dinámica (puntero a punteros)
    int cantidadVendedores;
    const int MESES{4};

   protected:
    double calcularPromedioVendedor(int indice) {
        double suma = 0;
        for (int mes{0}; mes < MESES; mes++) {
            suma += ventasMensuales[indice][mes];
        }
        return suma / MESES;
    }

    double calcularPromedioGeneral() {
        double suma = 0;
        for (int i{0}; i < cantidadVendedores; i++) {
            suma += calcularPromedioVendedor(i);
        }
        return suma / cantidadVendedores;
    }

   public:
    // Constructor
    SistemaVentas(int cantidad);
    // Destructor
    ~SistemaVentas() {
        delete[] nombresVendedores;
        // Liberar primero cada fila individual
        for (int i{0}; i < cantidadVendedores; i++) {
            delete[] ventasMensuales[i];
        }
        // Luego liberar el arreglo de punteros
        delete[] ventasMensuales;
    }

    void tomarDatos();
    void generarInforme();
};

}  // namespace ventas