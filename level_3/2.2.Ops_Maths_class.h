#pragma once
#include <cmath>
#include <iostream>

template <typename T>

class Ops_Maths {
   private:
    double convertir(T valor) {
        return sizeof(T) == sizeof(char) ? static_cast<int>(valor - '0')
                                         : static_cast<double>(valor);
    }

   protected:
    T a, b, c;

   public:
    // Constructores
    Ops_Maths() : a(0), b(0), c(0) {}
    Ops_Maths(T a, T b, T c) : a(a), b(b), c(c) {}

    // Métodos
    void suma() {
        std::cout << "Suma: " << convertir(a) + convertir(b) << std::endl;
    }
    void resta() {
        std::cout << "Resta: " << convertir(a) - convertir(b) - convertir(c)
                  << std::endl;
    }
    void multiplicacion() {
        std::cout << "Multiplicación: "
                  << convertir(a) * convertir(b) * convertir(c) << std::endl;
    }
    void division() {
        double numB = convertir(b);
        numB == 0
            ? std::cout << "Error: no se puede dividir entre cero." << std::endl
            : std::cout << "División: " << convertir(a) / numB << std::endl;
    }
    void potencia() {
        std::cout << "Potenciacion: " << pow(convertir(a), convertir(b))
                  << std::endl;
    }

    // Sobrecarga de métodos
    void suma(T a, T b, T c) {
        std::cout << "Suma: " << convertir(a) + convertir(b) + convertir(c)
                  << std::endl;
    }
    void resta(T a, T b, T c) {
        std::cout << "Resta: " << convertir(a) - convertir(b) - convertir(c)
                  << std::endl;
    }
    void multiplicacion(T a, T b, T c) {
        std::cout << "Multiplicación: "
                  << convertir(a) * convertir(b) * convertir(c) << std::endl;
    }
};
