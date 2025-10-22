# Aprendiendo algoritmos y lógica de programación con C++

# Learning algorithms and programming logic with C++

## Introducción

Este repositorio contiene ejercicios prácticos de programación en C++ enfocados en el aprendizaje de algoritmos y lógica de programación. Los ejercicios están organizados progresivamente en niveles, cubriendo desde los fundamentos hasta conceptos avanzados de programación modular.

---

## Tabla de Contenido

### Nivel 1: Fundamentos de C++

| Archivo              | Descripción                                        |
| -------------------- | -------------------------------------------------- |
| `hello.cpp`          | Programa básico "Hola Mundo"                       |
| `ops_math.cpp`       | Operaciones matemáticas básicas entre dos números  |
| `calc_perimetro.cpp` | Conversión de unidades y cálculo de perímetro      |
| `min_max.cpp`        | Comparación de dos números                         |
| `par_impar.cpp`      | Determinar si un número es par o impar             |
| `pos_neg.cpp`        | Clasificar número como positivo, negativo o neutro |
| `module.cpp`         | Verificar divisibilidad por 5                      |

### Nivel 2: Estructura del Lenguaje

| Archivo                       | Descripción                                                   |
| ----------------------------- | ------------------------------------------------------------- |
| `sellAssistant.cpp`           | Sistema de registro de productos con múltiples tipos de datos |
| `area_rectang.cpp`            | Cálculo del área de un rectángulo                             |
| `area_triang.cpp`             | Cálculo del área de un triángulo                              |
| `area_paralelo.cpp`           | Cálculo del área de un paralelogramo                          |
| `area_rombo.cpp`              | Cálculo del área de un rombo                                  |
| `area_trapecio.cpp`           | Cálculo del área de un trapecio                               |
| `area_circulo.cpp`            | Cálculo del área de un círculo usando la librería math        |
| `sellAssistant_V2.cpp`        | Sistema de ventas con cálculos de costos y utilidades         |
| `if_sellAssistant_V3.cpp`     | Sistema de ventas con clasificación por rangos de precio      |
| `switch_sellAssistant_V3.cpp` | Sistema de ventas usando estructura switch                    |
| `tabla_multiplicar.cpp`       | Generador de tablas de multiplicar con función                |
| `ciclo_sellAssistant_V3.cpp`  | Sistema de registro múltiple con ciclo while                  |

### Nivel 3: Módulos y Estructura Avanzada

| Archivo                     | Descripción                                              |
| --------------------------- | -------------------------------------------------------- |
| `customer.cpp`              | Sistema de lista de productos con arrays y validación    |
| `employee.cpp`              | Cálculo de totales con arrays bidimensionales            |
| `area_and_perimeter.cpp`    | Cálculo de áreas y perímetros con variables globales     |
| `payroll_payment.cpp`       | Sistema completo de nómina con múltiples arrays          |
| `shipping_cost.cpp`         | Cálculo de costos de envío con función de retorno        |
| `employee_salary.cpp`       | Cálculo de salario con paso de parámetros por referencia |
| `arrays_and_parameters.cpp` | Arreglos como parámetros usando punteros                 |

---

## Nivel 1: Fundamentos de C++

### Conceptos Básicos

#### Estructura de un programa

Todo programa en C++ sigue una estructura básica:

```cpp
#include <iostream>  // Librería para entrada/salida
using namespace std; // Espacio de nombres estándar

int main() {
    // Código del programa
    return 0;  // Indica ejecución exitosa
}
```

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

### Ejemplos

#### Operaciones Básicas

```cpp
// ops_math.cpp
cout << "La suma de los numeros es: " << a + b << endl;
cout << "El residuo es: " << a % b << endl;
```

#### Estructuras Condicionales

```cpp
// min_max.cpp
if (num1 == num2)
    cout << "Ambos números son iguales";
else if (num1 > num2)
    cout << num1 << " es mayor y " << num2 << " es menor";
else
    cout << num1 << " es menor y " << num2 << " es mayor";
```

#### Operador Módulo

```cpp
// par_impar.cpp
if (number % 2 == 0)
    cout << number << " es par";
else
    cout << number << " es impar";
```

---

## Nivel 2: Estructura del Lenguaje

### Conceptos Nuevos

#### Arrays de Caracteres (Cadenas)

```cpp
char descripcion[50];  // Array de 50 caracteres
cin.getline(descripcion, 50);  // Leer cadena con espacios
```

#### Operador Ternario

```cpp
// Condición ? valor_si_verdadero : valor_si_falso
disponibilidad == 'S' ? "Disponible" : "No disponible"
```

#### Librería Math

```cpp
#include <math.h>
float area = M_PI * pow(radio, 2);  // Constante PI y función potencia
```

#### Estructura Switch

```cpp
switch (caso) {
    case 1:
        // código
        break;
    case 2:
        // código
        break;
    default:
        // código por defecto
}
```

#### Ciclo While

```cpp
while (condicion) {
    // código que se repite mientras la condición sea verdadera
}
```

#### Funciones

```cpp
void nombreFuncion(int parametro) {
    // código de la función
}
```

### Ejemplos

#### Manejo de Cadenas y Buffer

```cpp
// sellAssistant.cpp
cin >> refZapato;
cin.ignore();  // Limpiar buffer antes de getline
cin.getline(descripcionZapato, 50);
```

#### Fórmulas Matemáticas

```cpp
// area_circulo.cpp
#include <math.h>
float area = M_PI * pow(radio, 2);

// area_rombo.cpp
area = (diagMayor * diagMenor) / 2;
```

#### Condicionales Anidadas

```cpp
// if_sellAssistant_V3.cpp
if (costo <= 30000) {
    tipo = 'A';
    utilidad = costo * 0.5;  // 50% de utilidad
} else if (costo > 30000 && costo <= 60000) {
    tipo = 'B';
    utilidad = costo * 0.4;  // 40% de utilidad
} else {
    tipo = 'C';
    utilidad = costo * 0.3;  // 30% de utilidad
}
```

#### Switch Case

```cpp
// switch_sellAssistant_V3.cpp
switch (caso) {
    case 1:
        tipo = 'A';
        utilidad = costo * 0.5;
        break;
    case 2:
        tipo = 'B';
        utilidad = costo * 0.4;
        break;
    case 3:
        tipo = 'C';
        utilidad = costo * 0.3;
        break;
}
```

#### Funciones Personalizadas

```cpp
// tabla_multiplicar.cpp
void tablaMultiplicar(int num) {
    for (int i = 1; i <= 9; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int number;
    cin >> number;
    tablaMultiplicar(number);  // Llamada a la función
}
```

#### Ciclo While con Validación

```cpp
// ciclo_sellAssistant_V3.cpp
char registrar;
while (registrar == 's' || registrar == 'S') {
    cin.getline(referencia, 10);
    cin.getline(descripcion, 30);

    cout << "Desea registrar OTRO zapato s/n: ";
    cin >> registrar;
}
```

---

## Nivel 3: Módulos y Estructura Avanzada

### Conceptos Nuevos

#### Arrays con String

```cpp
#include <string>
string productos[50];  // Array de strings
getline(cin, productos[i]);  // Leer string con espacios
```

#### Arrays Bidimensionales (Matrices)

```cpp
float productos[50][3];  // Matriz de 50 filas y 3 columnas
productos[i][0] = cantidad;
productos[i][1] = valor_unitario;
productos[i][2] = descuento;
```

#### Variables Globales

```cpp
// Variables declaradas fuera de main()
const int MAX = 25;
int num_empleados;
string nombres[MAX];
```

#### Funciones con Retorno

```cpp
int calcularCosto(int peso) {
    int costo = 0;
    // cálculos
    return costo;  // Devuelve el valor
}
```

#### Paso por Referencia

```cpp
// El símbolo & modifica el valor original
void modificar(int& valor) {
    valor = valor * 2;
}
```

#### Punteros como Parámetros

```cpp
// El asterisco * indica puntero
void procesar(int* arreglo, int tamaño) {
    arreglo[i] = valor;
}
```

#### Prototipos de Funciones

```cpp
// Declaración antes de main()
void empleado();
void calcular_pago();
```

### Ejemplos

#### Arrays de Strings

```cpp
// customer.cpp
string productos[50];
for (int i = 0; i < no_productos; i++) {
    getline(cin, productos[i]);
}
```

#### Arrays Bidimensionales

```cpp
// employee.cpp
float productos[50][3];

// Calcular total con descuento
for (int i = 0; i < no_productos; i++) {
    float total = (productos[i][0] * productos[i][1]) *
                  (1 - productos[i][2] / 100);
    cout << total << endl;
}
```

#### Variables Globales y Múltiples Arrays

```cpp
// payroll_payment.cpp
const int MAX = 25;
string nombres[MAX], cargos[MAX];
long cedulas[MAX];
int salarios[MAX];

void empleado() {
    for (int i = 0; i < num_empleados; i++) {
        cin >> cedulas[i];
        getline(cin, nombres[i]);
    }
}
```

#### Funciones con Retorno

```cpp
// shipping_cost.cpp
int calcularCostoEnvio(int peso) {
    int costo = 0;
    if (peso > 0 && peso <= 10) {
        costo = 28000;
    } else if (peso > 10 && peso <= 30) {
        costo = 34000 + ((peso - 10) * 1600);
    }
    return costo;
}

int main() {
    int costo = calcularCostoEnvio(peso);
    cout << "Costo: $" << costo << endl;
}
```

#### Paso por Referencia

```cpp
// employee_salary.cpp
int calcularSalarioAnual(int& salario_anual, int& antiguedad) {
    if (antiguedad >= 0 && antiguedad < 5) {
        salario_anual += 0.06 * salario_anual;  // 6% aumento
    } else if (antiguedad >= 5 && antiguedad < 10) {
        salario_anual += 0.08 * salario_anual;  // 8% aumento
    }
    return salario_anual;
}
```

#### Punteros y Arrays

```cpp
// arrays_and_parameters.cpp
void agregarElementos(int* arreglo, int cant) {
    for (int i = 0; i < cant; i++) {
        cin >> arreglo[i];
    }
}

void mostrarElementos(int* arreglo, int cant) {
    for (int i = 0; i < cant; i++) {
        cout << pow(arreglo[i], 3) << endl;
    }
}
```

#### Sistema con Variables Globales

```cpp
// area_and_perimeter.cpp
double area, perimetro;

void calcular_cuadrado(double lado) {
    area = lado * lado;
    perimetro = 4 * lado;
}

void mostrar_resultados(string figura) {
    cout << "Figura: " << figura << endl;
    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;
}
```

---

## Compilación y Ejecución

```bash
# Compilar
g++ nombre_archivo.cpp -o programa

# Ejecutar
./programa
```

## Autor

Desarrollado por Luis Ariza
