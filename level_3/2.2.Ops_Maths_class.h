#pragma once
#include <cmath>
#include <iostream>

template <typename T>

class Ops_Maths {
   private:
    // Convierte T a double. Si T es char interpreta '0'..'9' como su valor
    // numérico; si no, usa static_cast.
    static double convertir(const T& valor) {
        if constexpr (std::is_same_v<T, char>)
            return static_cast<int>(valor - '0');
        else
            return static_cast<double>(valor);
    }

   protected:
    T a{0}, b{0}, c{0};

   public:
    // Constructores
    Ops_Maths() = default;
    Ops_Maths(T a, T b, T c) : a(a), b(b), c(c) {}

    // Métodos
    double suma() const { return convertir(a) + convertir(b) + convertir(c); }
    double resta() const { return convertir(a) - convertir(b) - convertir(c); }
    double multiplicacion() const {
        return convertir(a) * convertir(b) * convertir(c ? c : 1);
    }
    double division() const {
        double numB = convertir(b);
        if (numB == 0) {
            std::cout << "Error: no se puede dividir entre cero.";
            return NAN;  // Retorna "Not a Number"
        }
        return convertir(a) / numB;
    }
    double potencia() const { return std::pow(convertir(a), convertir(b)); }

    // Sobrecargas (2 o 3 parámetros)
    double suma(T x, T y, T z = 0) const {
        return convertir(x) + convertir(y) + convertir(z);
    }
    double resta(T x, T y, T z = 0) const {
        return convertir(x) - convertir(y) - convertir(z);
    }
    double multiplicacion(T x, T y, T z = 1) const {
        return convertir(x) * convertir(y) * convertir(z);
    }
    double division(T x, T y) const {
        double numY = convertir(y);
        if (numY == 0) {
            std::cout << "Error: no se puede dividir entre cero.";
            return NAN;
        }
        return convertir(x) / numY;
    }
    double potencia(T x, T y) const {
        return std::pow(convertir(x), convertir(y));
    }

    // Método utilitario para mostrar resultados
    void mostrar() const {
        std::cout << "Suma: " << suma() << "\n"
                  << "Resta: " << resta() << "\n"
                  << "Multiplicación: " << multiplicacion() << "\n"
                  << "División: " << division() << "\n"
                  << "Potenciación: " << potencia() << std::endl;
    }
};
