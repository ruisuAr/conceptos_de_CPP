// Calcular area y perímetro de figuras geométricas
// Módulo y estructura del lenguaje C++: Actividad 3 - Evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <cmath>
#include <iostream>
using namespace std;

// Variables globales
double area, perimetro;

// Prototipos de funciones
void calcular_cuadrado(double lado);
void calcular_rectangulo(double base, double altura);
void calcular_triangulo(double base, double altura, double lado1,
                        double lado2);
void calcular_circulo(double radio);
void mostrar_resultados(string figura);

int main()
{
  calcular_cuadrado(5);
  mostrar_resultados("Cuadrado");

  calcular_rectangulo(4, 6);
  mostrar_resultados("Rectángulo");

  calcular_triangulo(3, 4, 5, 6);
  mostrar_resultados("Triángulo");

  calcular_circulo(7);
  mostrar_resultados("Círculo");

  return 0;
}

// Funciones de cálculo
void calcular_cuadrado(double lado)
{
  double l = lado;  // variable local
  area = l * l;
  perimetro = 4 * l;
}

void calcular_rectangulo(double base, double altura)
{
  double b = base, h = altura;  // variables locales
  area = b * h;
  perimetro = 2 * (b + h);
}

void calcular_triangulo(double base, double altura, double lado1,
                        double lado2)
{
  double b = base, h = altura;  // variables locales
  area = (b * h) / 2;
  perimetro = b + lado1 + lado2;
}

void calcular_circulo(double radio)
{
  double r = radio;  // variable local
  area = M_PI * pow(r, 2);
  perimetro = 2 * M_PI * r;
}

// Función para mostrar resultados
void mostrar_resultados(string figura)
{
  cout << "Figura: " << figura << endl;
  cout << "Área: " << area << endl;
  cout << "Perímetro: " << perimetro << endl;
}