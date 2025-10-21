# Aprendiendo algoritmos y lógica de programación con C++

## Introducción

Este repositorio contiene ejercicios prácticos de programación en C++ enfocados en el aprendizaje de algoritmos y lógica de programación. Los ejercicios están organizados progresivamente, comenzando con los fundamentos del lenguaje.

## Tabla de Contenido

### Nivel 1: Fundamentos de C++

| Archivo              | Descripción                                        |
| -------------------- | -------------------------------------------------- |
| `ops_math.cpp`       | Operaciones matemáticas básicas entre dos números  |
| `calc_perimetro.cpp` | Conversión de unidades y cálculo de perímetro      |
| `min_max.cpp`        | Comparación de dos números                         |
| `par_impar.cpp`      | Determinar si un número es par o impar             |
| `pos_neg.cpp`        | Clasificar número como positivo, negativo o neutro |
| `module.cpp`         | Verificar divisibilidad por 5                      |

## Conceptos Básicos de C++

### Estructura de un programa

Todo programa en C++ sigue una estructura básica:

```cpp
#include <iostream>  // Librería para entrada/salida
using namespace std; // Espacio de nombres estándar

int main() {
    // Código del programa
    return 0;  // Indica ejecución exitosa
}
```

### Sintaxis Fundamental

#### Variables y Tipos de Datos

```cpp
int edad = 25;        // Número entero
float promedio = 4.5; // Número decimal
```

#### Entrada y Salida

```cpp
cout << "Mensaje";    // Salida de datos
cin >> variable;      // Entrada de datos
```

#### Operadores

- **Aritméticos**: `+`, `-`, `*`, `/`, `%` (módulo)
- **Comparación**: `==`, `!=`, `>`, `<`, `>=`, `<=`

## Ejemplos del Nivel 1

### Operaciones Básicas

```cpp
// Operaciones matemáticas
cout << "La suma de los numeros es: " << a + b << endl;
cout << "El residuo es: " << a % b << endl;
```

### Estructuras Condicionales

```cpp
// Comparación de números
if (num1 == num2)
    cout << "Ambos números son iguales";
else if (num1 > num2)
    cout << num1 << " es mayor y " << num2 << " es menor";
else
    cout << num1 << " es menor y " << num2 << " es mayor";
```

### Operador Módulo

```cpp
// Determinar paridad
if (number % 2 == 0)
    cout << number << " es par";
else
    cout << number << " es impar";
```

## Compilación y Ejecución

```bash
# Compilar
g++ nombre_archivo.cpp -o programa

# Ejecutar
./programa
```

## Autor

Desarrollado por Luis Ariza
