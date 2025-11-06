#pragma once
#include <cmath>
#include <fstream>  // Para manejo de archivos
#include <iostream>
#include <string>

class NumeroImaginario {
    // Sobrecarga de operadores como funciones friend
    friend NumeroImaginario operator+(NumeroImaginario, NumeroImaginario);
    friend NumeroImaginario operator-(NumeroImaginario, NumeroImaginario);
    friend NumeroImaginario operator*(NumeroImaginario, NumeroImaginario);
    friend NumeroImaginario operator/(NumeroImaginario, NumeroImaginario);

   private:
    double parteReal;        // Parte real del número
    double parteImaginaria;  // Parte imaginaria del número

   public:
    // Constructores
    NumeroImaginario();                // Constructor por defecto
    NumeroImaginario(double, double);  // Constructor parametrizado

    // Métodos de acceso (getters y setters)
    double getParteReal();
    double getParteImaginaria();
    void setParteReal(double);
    void setParteImaginaria(double);

    // Método para visualizar el número complejo
    void Muestra();
    std::string toString();  // Para escribir en archivo
};

// Sobrecarga de operadores

// Operador + (SUMA de números complejos)
// (a + bi) + (c + di) = (a+c) + (b+d)i
NumeroImaginario operator+(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    resultado.parteReal = n1.parteReal + n2.parteReal;
    resultado.parteImaginaria = n1.parteImaginaria + n2.parteImaginaria;
    return resultado;
}

// Operador - (RESTA de números complejos)
// (a + bi) - (c + di) = (a-c) + (b-d)i
NumeroImaginario operator-(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    resultado.parteReal = n1.parteReal - n2.parteReal;
    resultado.parteImaginaria = n1.parteImaginaria - n2.parteImaginaria;
    return resultado;
}

// Operador * (MULTIPLICACIÓN de números complejos)
// (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
NumeroImaginario operator*(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    resultado.parteReal = (n1.parteReal * n2.parteReal) -
                          (n1.parteImaginaria * n2.parteImaginaria);
    resultado.parteImaginaria = (n1.parteReal * n2.parteImaginaria) +
                                (n1.parteImaginaria * n2.parteReal);
    return resultado;
}

// Operador / (DIVISIÓN de números complejos)
// (a + bi) / (c + di) = [(ac + bd) / (c² + d²)] + [(bc - ad) / (c² + d²)]i
NumeroImaginario operator/(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    double denominador = (n2.parteReal * n2.parteReal) +
                         (n2.parteImaginaria * n2.parteImaginaria);

    if (denominador == 0) {
        std::cout << "\n¡ERROR! División por cero" << std::endl;
        return resultado;
    }

    resultado.parteReal = ((n1.parteReal * n2.parteReal) +
                           (n1.parteImaginaria * n2.parteImaginaria)) /
                          denominador;
    resultado.parteImaginaria = ((n1.parteImaginaria * n2.parteReal) -
                                 (n1.parteReal * n2.parteImaginaria)) /
                                denominador;
    return resultado;
}
