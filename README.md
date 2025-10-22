# Algoritmos y lógica de programación con C++

## Introducción

Este repositorio contiene ejercicios prácticos de programación en C++ organizados en niveles progresivos. Esta guía sirve como repaso rápido de los conceptos fundamentales del lenguaje.

---

## Compilación y Ejecución

```bash
# Compilar
g++ nombre_archivo.cpp -o programa

# Ejecutar en Linux/Mac
./programa

# Ejecutar en Windows
programa.exe
```

---

## Estructura Básica de un Programa

```cpp
#include <iostream>  // Librería para entrada/salida
using namespace std; // Espacio de nombres estándar

int main() {
    // Código del programa
    return 0;  // Indica ejecución exitosa
}
```

---

## Comentarios

```cpp
// Comentario de una línea

/*
Comentario de
múltiples líneas
*/
```

---

## Tipos de Variables

```cpp
// Números enteros
int edad = 25;
int numero = -10;

// Números decimales
float precio = 19.99;
double area = 3.14159;

// Caracteres y cadenas
char letra = 'A';
char nombre[50];         // Array de caracteres
string descripcion;      // String de C++ (requiere #include <string>)

// Booleanos
bool activo = true;
bool disponible = false;

// Enteros largos
long telefono = 3001234567;
```

---

## Constantes

```cpp
const int MAX = 25;     // Constante que no puede cambiar
float PI = 3.14159;
float PI_MATH = M_PI;   // Constante de la librería math.h
```

---

## Entrada y Salida de Datos

```cpp
// Salida
cout << "Hola Mundo" << endl;
cout << "La suma es: " << a + b << endl;

// Entrada
int numero;
cin >> numero;

// Entrada de cadenas con espacios
char descripcion[50];
cin.ignore();  // Limpiar buffer antes de getline
cin.getline(descripcion, 50);

// Con string de C++
string nombre;
getline(cin, nombre);
```

---

## Operadores

```cpp
// Aritméticos
int suma = a + b;
int resta = a - b;
int multiplicacion = a * b;
int division = a / b;
int residuo = a % b;  // Módulo (resto de la división)

// Comparación
if (a == b)  // Igual a
if (a != b)  // Diferente de
if (a > b)   // Mayor que
if (a < b)   // Menor que
if (a >= b)  // Mayor o igual
if (a <= b)  // Menor o igual

// Lógicos
if (a > 0 && b > 0)  // AND (y)
if (a > 0 || b > 0)  // OR (o)
if (!(a > 0))        // NOT (negación)

// Incremento/Decremento
i++;  // i = i + 1
i--;  // i = i - 1
```

---

## Estructuras Condicionales

```cpp
// If simple
if (numero > 0) {
    cout << "Positivo";
}

// If-else
if (numero % 2 == 0) {
    cout << "Par";
} else {
    cout << "Impar";
}

// If-else if-else
if (edad <= 6) {
    cout << "Primera infancia";
} else if (edad <= 12) {
    cout << "Segunda infancia";
} else if (edad <= 18) {
    cout << "Adolescente";
} else {
    cout << "Adulto";
}

// Operador ternario
string resultado = (edad >= 18) ? "Mayor de edad" : "Menor de edad";
```

---

## Estructura Switch

```cpp
int opcion;
cin >> opcion;

switch (opcion) {
    case 1:
        cout << "Opción 1";
        break;  // Importante para salir del switch
    case 2:
        cout << "Opción 2";
        break;
    case 3:
        cout << "Opción 3";
        break;
    default:
        cout << "Opción no válida";
}
```

---

## Ciclos (Bucles)

```cpp
// Ciclo for - cuando se conoce el número de iteraciones
for (int i = 1; i <= 10; i++) {
    cout << i << endl;
}

// Ciclo while - cuando no se conoce el número de iteraciones
int i = 0;
while (i < 10) {
    cout << i << endl;
    i++;
}

// Ciclo do-while - se ejecuta al menos una vez
char respuesta;
do {
    cout << "¿Continuar? (s/n): ";
    cin >> respuesta;
} while (respuesta == 's' || respuesta == 'S');

// Continue - salta a la siguiente iteración
for (int i = 0; i < 10; i++) {
    if (i == 5) continue;  // Salta el 5
    cout << i << endl;
}
```

---

## Arrays (Arreglos)

```cpp
// Arrays unidimensionales
int numeros[10];           // Declaración
int valores[5] = {1, 2, 3, 4, 5};  // Declaración e inicialización

// Acceder y modificar elementos
numeros[0] = 10;
numeros[1] = 20;
cout << numeros[0] << endl;

// Recorrer un array
for (int i = 0; i < 5; i++) {
    cout << valores[i] << endl;
}

// Arrays de caracteres
char nombre[50];
cin.getline(nombre, 50);

// Arrays de strings
string productos[50];
getline(cin, productos[0]);

// Arrays bidimensionales (matrices)
float matriz[50][3];  // 50 filas, 3 columnas
matriz[0][0] = 10.5;
matriz[0][1] = 20.3;
matriz[0][2] = 5.8;

// Recorrer matriz
for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
        cout << matriz[i][j] << " ";
    }
    cout << endl;
}
```

---

## Funciones

```cpp
// Función sin parámetros ni retorno
void saludar() {
    cout << "Hola!" << endl;
}

// Función con parámetros
void mostrarMensaje(string mensaje) {
    cout << mensaje << endl;
}

// Función con retorno
int sumar(int a, int b) {
    return a + b;
}

// Función con múltiples parámetros
float calcularArea(float base, float altura) {
    return (base * altura) / 2;
}

// Prototipos de funciones (declaración antes de main)
void empleado();
void calcular_pago();
void mostrar_pago();

int main() {
    saludar();
    mostrarMensaje("Hola Mundo");
    int resultado = sumar(5, 3);
    empleado();
    return 0;
}
```

---

## Paso de Parámetros

```cpp
// Paso por valor (copia) - no modifica el original
void incrementar(int numero) {
    numero = numero + 10;
}

// Paso por referencia - modifica el original
void incrementarRef(int& numero) {
    numero = numero + 10;  // Modifica la variable original
}

// Punteros como parámetros
void modificarArray(int* arreglo, int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        arreglo[i] = arreglo[i] * 2;
    }
}

int main() {
    int valor = 5;
    incrementar(valor);     // valor sigue siendo 5
    incrementarRef(valor);  // valor ahora es 15

    int lista[5] = {1, 2, 3, 4, 5};
    modificarArray(lista, 5);  // Modifica el array original
}
```

---

## Variables Globales vs Locales

```cpp
// Variables globales - accesibles por todas las funciones
int contador = 0;
const int MAX = 100;
string nombres[50];

void incrementar() {
    contador++;  // Puede usar la variable global
}

int main() {
    // Variables locales - solo existen dentro de esta función
    int numero = 10;
    float precio = 25.5;

    incrementar();
    cout << contador << endl;  // 1
    return 0;
}
```

---

## Librerías Comunes

```cpp
#include <iostream>   // cin, cout, endl
#include <string>     // string
#include <math.h>     // pow(), sqrt(), M_PI
#include <cmath>      // Versión C++ de math.h
#include <cstdlib>    // system(), rand()

// Funciones matemáticas
float area = M_PI * pow(radio, 2);     // PI y potencia
float raiz = sqrt(25);                 // Raíz cuadrada
float cubo = pow(numero, 3);           // Elevar al cubo

// Funciones del sistema
system("clear");  // Limpiar consola en Linux/Mac
system("cls");    // Limpiar consola en Windows
system("pause");  // Pausar ejecución en Windows
```

---

## Inicialización de Variables

```cpp
// Formas de inicializar
int a = 10;           // Forma tradicional
int b(20);            // Inicialización con paréntesis
int c{30};            // Inicialización uniforme (C++11)
int d = {40};         // Inicialización con llaves

// Inicialización múltiple
int x = 0, y = 0, z = 0;

// Inicializar en 0
int cantidad{0};
float suma = 0.0;
```

---

## Conversiones de Unidades

```cpp
// Conversión de hectómetros, decámetros y metros a decímetros
float hecto, deca, metro;
float dm_hm = hecto * 1000;  // Hectómetros a decímetros
float dm_Dm = deca * 100;    // Decámetros a decímetros
float dm_m = metro * 10;     // Metros a decímetros
float perimeter_dm = dm_hm + dm_Dm + dm_m;  // Sumar todos
```

---

## Cálculos Matemáticos Avanzados

```cpp
// Área de figuras geométricas
float area_rectangulo = base * altura;
float area_triangulo = (base * altura) / 2;
float area_circulo = M_PI * pow(radio, 2);
float area_rombo = (diagMayor * diagMenor) / 2;
float area_trapecio = ((baseMayor + baseMenor) / 2) * altura;

// Perímetro de figuras
float perimetro_cuadrado = 4 * lado;
float perimetro_rectangulo = 2 * (base + altura);
float perimetro_circulo = 2 * M_PI * radio;
float perimetro_triangulo = lado1 + lado2 + lado3;

// Aceleración
int aceleracion = (velocidad_final - velocidad_inicial) / tiempo;
```

---

## Cálculos Comerciales

```cpp
// Cálculos de costos y utilidades
int costo_total = costo * cantidad;
int precio_total = precio_venta * cantidad;
int utilidad = precio_venta - costo;
int utilidad_total = utilidad * cantidad;
float porcentaje_utilidad = (utilidad * 100) / costo;

// Clasificación de productos por costo
if (costo <= 30000) {
    tipo = 'A';
    utilidad = costo * 0.5;  // 50% de utilidad
} else if (costo > 30000 && costo <= 60000) {
    tipo = 'B';
    utilidad = costo * 0.4;  // 40% de utilidad
} else if (costo > 60000) {
    tipo = 'C';
    utilidad = costo * 0.3;  // 30% de utilidad
}

// Cálculo de precio de venta
int precio_venta = costo + utilidad;

// Cálculo con descuento
float total = (cantidad * valor_unitario) * (1 - descuento / 100);
```

---

## Validación de Datos

```cpp
// Validar rango de notas
float nota;
cout << "Ingrese la nota " << i << ": ";
cin >> nota;

if (nota < 0 || nota > 5) {
    cout << "Nota no válida. Debe estar entre 0.0 y 5.0." << endl;
    continue;  // Pide la nota nuevamente sin incrementar contador
}

// Validar disponibilidad
char disponibilidad;
if (disponibilidad == 'S' || disponibilidad == 's') {
    cout << "Digite cuantos zapatos tiene disponible..." << endl;
    cin >> cantidad;
}

// Validar edad en rangos
if (edad >= 0 && edad <= 6) {
    cout << "Primera infancia";
} else if (edad > 6 && edad <= 12) {
    cout << "Segunda infancia";
} else if (edad > 12 && edad <= 18) {
    cout << "Adolescente";
} else {
    cout << "Rango de edad no permitido";
}
```

---

## Promedio de Notas

```cpp
// Promedio con número fijo de notas
float nota1, nota2, nota3, nota4;
float promedio = (nota1 + nota2 + nota3 + nota4) / 4;

// Promedio con cantidad variable
int no_notas;
float sum_notas = 0;
int i = 1;
while (i <= no_notas) {
    float nota;
    cin >> nota;

    if (nota < 0 || nota > 5) {
        cout << "Nota no válida" << endl;
        continue;  // No incrementa el contador
    }

    sum_notas += nota;
    i++;
}
float promedio = sum_notas / no_notas;

// Evaluación del promedio
if (promedio >= 3.5 && promedio <= 5) {
    cout << "Aprobado";
} else if (promedio >= 3 && promedio < 3.5) {
    cout << "Puede recuperar";
} else if (promedio >= 0 && promedio < 3) {
    cout << "No aprobado";
}
```

---

## Ciclos con Acumuladores

```cpp
// Carga de camiones
float cap_camion, acum_sacas = 0, peso_saca;

for (int i = 1; i <= 20; i++) {
    cout << "Capacidad del camion " << i << ": ";
    cin >> cap_camion;

    acum_sacas = 0;  // Reiniciar acumulador

    while (acum_sacas + peso_saca <= cap_camion) {
        acum_sacas += peso_saca;  // Acumular peso
        cout << "Digite el peso de la siguiente saca: ";
        cin >> peso_saca;
    }

    cout << "El camion " << i << " se ha despachado" << endl;
}
```

---

## Ciclos con Opción de Usuario

```cpp
// Ciclo controlado por usuario
int opcion;
float sum_notas = 0;
int i = 0;

do {
    float nota;
    cout << "Ingrese la nota " << i + 1 << ": ";
    cin >> nota;

    if (nota < 0 || nota > 5) {
        cout << "Nota no válida" << endl;
        continue;
    }

    sum_notas += nota;
    i++;

    cout << "Presione '1' para continuar, '0' para terminar: ";
    cin >> opcion;

} while (opcion == 1);

float promedio = sum_notas / i;
```

---

## Sistema de Registro con Ciclos

```cpp
// Registro múltiple de productos
char registrar;
cout << "Desea registrar un producto s/n: ";
cin >> registrar;

while (registrar == 's' || registrar == 'S') {
    cin.ignore();  // Limpiar buffer

    cout << "Digite la referencia: ";
    cin.getline(referencia, 10);
    cout << "Digite una descripcion: ";
    cin.getline(descripcion, 30);
    cout << "Digite la talla: ";
    cin >> talla;
    cout << "Costo: $";
    cin >> costo;

    cout << "\nDesea registrar OTRO producto s/n: ";
    cin >> registrar;
}
```

---

## Arrays con Validación

```cpp
// Lista de productos con validación
string productos[50];
int no_productos;
char respuesta;

do {
    cout << "Cuantos productos desea agregar: ";
    cin >> no_productos;
    cin.ignore();

    for (int i = 0; i < no_productos; i++) {
        cout << "Producto " << i + 1 << ": ";
        getline(cin, productos[i]);
    }

    system("clear");

    cout << "Lista de productos:\n";
    for (int i = 0; i < no_productos; i++) {
        cout << productos[i] << endl;
    }

    cout << "Satisfecho con la lista? (s/n): ";
    cin >> respuesta;

} while (respuesta == 'n' || respuesta == 'N');
```

---

## Arrays Bidimensionales con Cálculos

```cpp
// Matriz para almacenar datos de productos
float productos[50][3];  // [cantidad, valor_unitario, descuento]
int no_productos;

// Ingresar datos
for (int i = 0; i < no_productos; i++) {
    cout << "Cantidad del producto " << i + 1 << ": ";
    cin >> productos[i][0];
    cout << "Valor unitario: ";
    cin >> productos[i][1];
    cout << "Porcentaje de descuento: ";
    cin >> productos[i][2];
}

// Mostrar datos
for (int i = 0; i < no_productos; i++) {
    for (int j = 0; j < 3; j++) {
        cout << productos[i][j] << " ";
    }
    cout << endl;
}

// Calcular totales con descuento
for (int i = 0; i < no_productos; i++) {
    float total = (productos[i][0] * productos[i][1]) *
                  (1 - productos[i][2] / 100);
    cout << "Total: $" << total << endl;
}
```

---

## Sistema de Nómina Completo

```cpp
// Variables globales para empleados
const int MAX = 25;
int num_empleados;

string nombres[MAX], cargos[MAX];
long cedulas[MAX], telefonos[MAX];
int salarios[MAX], horas_extras[MAX];
int desc_prestamo[MAX], ahorro_vol[MAX], desc_SS[MAX];
int pago_total[MAX];

// Función para ingresar datos del empleado
void empleado() {
    for (int i = 0; i < num_empleados; i++) {
        cout << "Empleado #" << i + 1 << endl;
        cout << "Cedula: ";
        cin >> cedulas[i];
        cin.ignore();
        cout << "Nombres: ";
        getline(cin, nombres[i]);
        cout << "Telefono: ";
        cin >> telefonos[i];
        cin.ignore();
        cout << "Cargo: ";
        getline(cin, cargos[i]);
        cout << "Salario Basico: $";
        cin >> salarios[i];
    }
}

// Función para calcular pago
void calcular_pago() {
    for (int i = 0; i < num_empleados; i++) {
        int pago_horas_extras = horas_extras[i] * (salarios[i] / 240);
        pago_total[i] = salarios[i] + pago_horas_extras -
                        desc_prestamo[i] - ahorro_vol[i] - desc_SS[i];
    }
}

// Función para mostrar información
void mostrar_pago() {
    for (int i = 0; i < num_empleados; i++) {
        cout << "Empleado: " << nombres[i] << endl;
        cout << "Pago Total: $" << pago_total[i] << endl;
    }
}
```

---

## Funciones con Variables Globales

```cpp
// Variables globales compartidas
double area, perimetro;

// Funciones que usan y modifican variables globales
void calcular_cuadrado(double lado) {
    double l = lado;  // Variable local
    area = l * l;     // Modifica variable global
    perimetro = 4 * l;
}

void calcular_rectangulo(double base, double altura) {
    double b = base, h = altura;  // Variables locales
    area = b * h;
    perimetro = 2 * (b + h);
}

void mostrar_resultados(string figura) {
    cout << "Figura: " << figura << endl;
    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;
}

int main() {
    calcular_cuadrado(5);
    mostrar_resultados("Cuadrado");

    calcular_rectangulo(4, 6);
    mostrar_resultados("Rectángulo");
}
```

---

## Funciones con Retorno de Valores

```cpp
// Función que retorna costo calculado
int calcularCostoEnvio(int peso) {
    int costo = 0;

    if (peso > 0 && peso <= 10) {
        costo = 28000;
    } else if (peso > 10 && peso <= 30) {
        costo = 34000 + ((peso - 10) * 1600);
    } else if (peso >= 50) {
        costo = 60000 + ((peso - 50) * 1900);
    }

    return costo;  // Devuelve el valor calculado
}

int main() {
    int peso;
    cin >> peso;

    int costo = calcularCostoEnvio(peso);  // Recibe el valor retornado
    cout << "Costo de envío: $" << costo << endl;
}
```

---

## Funciones con Paso por Referencia

```cpp
// Modifica los valores originales usando &
int calcularSalarioAnual(int& salario_anual, int& antiguedad) {
    // Validación de antigüedad
    if (antiguedad >= 0 && antiguedad < 5) {
        salario_anual += 0.06 * salario_anual;  // 6% de aumento
    } else if (antiguedad >= 5 && antiguedad < 10) {
        salario_anual += 0.08 * salario_anual;  // 8% de aumento
    } else if (antiguedad >= 10) {
        salario_anual += 0.10 * salario_anual;  // 10% de aumento
    }

    return salario_anual;
}

int main() {
    int salario_anual, antiguedad;
    cin >> salario_anual >> antiguedad;

    cout << "Salario actual mensual: $" << salario_anual / 12 << endl;

    calcularSalarioAnual(salario_anual, antiguedad);  // Modifica el original

    cout << "Salario próximo año: $" << salario_anual / 12 << endl;
}
```

---

## Arrays como Parámetros con Punteros

```cpp
// Prototipos usando punteros
void agregarElementos(int* arreglo, int cant_elementos);
void mostrarElementos(int* arreglo, int cant_elementos);

int main() {
    int cant_elementos;
    cout << "Cantidad de elementos: ";
    cin >> cant_elementos;

    int lista[cant_elementos];

    agregarElementos(lista, cant_elementos);
    mostrarElementos(lista, cant_elementos);
}

// Función que recibe array por puntero
void agregarElementos(int* arreglo, int cant_elementos) {
    for (int i = 0; i < cant_elementos; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> arreglo[i];
    }
}

// Función que procesa el array
void mostrarElementos(int* arreglo, int cant_elementos) {
    for (int i = 0; i < cant_elementos; i++) {
        cout << "Elemento " << (i + 1) << " al cubo: "
             << pow(arreglo[i], 3) << endl;
    }
}
```

---

## Tabla de Multiplicar con Funciones

```cpp
// Función que genera tabla de multiplicar
void tablaMultiplicar(int num) {
    for (int i = 1; i <= 9; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int number;

    // Mostrar opciones disponibles
    int tabla = 0;
    cout << "Tablas de multiplicación:" << endl;
    while (tabla < 9) {
        cout << "Tabla del " << tabla << endl;
        tabla++;
    }

    cout << "\nSeleccione una tabla: ";
    cin >> number;

    tablaMultiplicar(number);  // Llamar función
}
```

## Autor

Desarrollado por Luis Ariza
