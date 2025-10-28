#pragma once
#include <iostream>
#include <string>
// <iomanip>: manipuladores de E/S (std::setw, std::setprecision, std::fixed,
// etc) usados para formatear la salida en el informe de ventas
#include <iomanip>

class SistemaVentas {
   private:
    std::string* nombresVendedores;  // Arreglo dinámico de strings
    double** ventasMensuales;        // Matriz dinámica (puntero a punteros)
    int cantidadVendedores;
    const int MESES{4};

   public:
    SistemaVentas(int cantidad) : cantidadVendedores(cantidad) {
        nombresVendedores = new std::string[cantidadVendedores];

        // Crear matriz 2D: primero el arreglo de filas
        ventasMensuales = new double*[cantidadVendedores];
        // Luego cada fila (columnas para cada vendedor)
        for (int i{0}; i < cantidadVendedores; i++) {
            ventasMensuales[i] = new double[MESES];
        }
    }

    ~SistemaVentas() {
        delete[] nombresVendedores;
        // Liberar primero cada fila individual
        for (int i{0}; i < cantidadVendedores; i++) {
            delete[] ventasMensuales[i];
        }
        // Luego liberar el arreglo de punteros
        delete[] ventasMensuales;
    }

    void capturarDatos() {
        for (int i{0}; i < cantidadVendedores; i++) {
            std::cout << "Nombre: ";
            std::cin.ignore();  // Limpia el buffer del enter anterior
            std::getline(std::cin, nombresVendedores[i]);

            for (int mes{0}; mes < MESES; mes++) {
                std::cout << "Mes " << (mes + 1) << ": $";
                std::cin >> ventasMensuales[i][mes];

                while (ventasMensuales[i][mes] < 0) {
                    std::cout << "Valor debe ser positivo: $";
                    std::cin >> ventasMensuales[i][mes];
                }
            }
        }
    }

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

    void generarInforme() {
        // fixed: muestra decimales fijos, setprecision(2): 2 decimales
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\n\nINFORME DE VENTAS\n" << std::endl;

        // setw(N): establece ancho de columna en N caracteres
        // left: alinea texto a la izquierda
        // right: alinea números a la derecha
        std::cout << std::left << std::setw(15) << "Vendedor" << std::right
                  << std::setw(15) << "Mes 1" << std::setw(15) << "Mes 2"
                  << std::setw(15) << "Mes 3" << std::setw(15) << "Mes 4"
                  << std::setw(15) << "Promedio" << std::endl;

        // std::string(90, '-'): crea string con 90 guiones como línea divisoria
        std::cout << std::string(90, '-') << std::endl;

        // Imprimir datos de cada vendedor
        for (int i{0}; i < cantidadVendedores; i++) {
            std::cout << std::left << std::setw(15) << nombresVendedores[i];

            // Ventas mensuales
            for (int mes{0}; mes < MESES; mes++) {
                std::cout << std::right << std::setw(15)
                          << ventasMensuales[i][mes];
            }

            // Promedio individual al final de la fila
            std::cout << std::setw(15) << calcularPromedioVendedor(i)
                      << std::endl;
        }

        std::cout << std::string(90, '-') << std::endl;

        // Fila del promedio general (ocupa 75 chars, promedio en últimos 15)
        std::cout << std::left << std::setw(75) << "PROMEDIO GENERAL"
                  << std::right << std::setw(15) << calcularPromedioGeneral()
                  << "\n"
                  << std::endl;
    }
};