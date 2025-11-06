# Algoritmos y lógica de programación con C++

## Introducción

Este repositorio contiene ejercicios prácticos de programación en C++ organizados en niveles progresivos. Esta guía sirve como repaso rápido de los conceptos fundamentales del lenguaje.

## Compilación y Ejecución

```bash
# Compilar
g++ nombre_archivo.cpp -o programa

# Ejecutar en Linux/Mac
./programa

# Ejecutar en Windows
programa.exe
```

## Estructura Básica de un Programa

```cpp
#include <iostream>  // Librería para entrada/salida
using namespace std; // Espacio de nombres estándar

int main() {
    // Código del programa
    return 0;  // Indica ejecución exitosa
}
```

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

## Constantes

```cpp
const int MAX = 25;     // Constante que no puede cambiar
float PI = 3.14159;
float PI_MATH = M_PI;   // Constante de la librería math.h
```

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

---

## Programación Orientada a Objetos (POO)

### Clases y Objetos

```cpp
// Definición de una clase
class Cliente {
   private:  // Atributos privados (encapsulación)
    string cedula;
    string nombre;
    string telefono;

   public:  // Métodos públicos
    // Constructor - inicializa los atributos
    Cliente(string laCedula, string elNombre, string elTelefono);
    
    // Métodos
    void comprar();
    void alquilar();
};

// Implementación del constructor
Cliente::Cliente(string laCedula, string elNombre, string elTelefono) {
    cedula = laCedula;
    nombre = elNombre;
    telefono = elTelefono;
}

// Implementación de métodos
void Cliente::comprar() {
    cout << "El cliente " << nombre << " ha comprado un videojuego" << endl;
}

void Cliente::alquilar() {
    cout << "Videojuego alquilado a " << nombre << endl;
}

// Crear objetos de la clase
int main() {
    Cliente cliente1 = Cliente("10278548", "Luis Hurtado", "3156478524");
    Cliente cliente2 = Cliente("24342548", "Andrea Moreno", "2627788");
    
    cliente1.alquilar();
    cliente2.comprar();
}
```

---

## Herencia

```cpp
// Clase padre (base)
class Persona {
   private:
    string nombre;
    int edad;

   public:
    Persona(string elNombre, int laEdad);
    void verPersona();
};

// Clase hija que hereda de Persona
class Empleado : public Persona {
   private:
    string cargo;
    float salario;

   public:
    // Constructor de la clase hija
    Empleado(string elNombre, int laEdad, string elCargo, float elSalario)
        : Persona(elNombre, laEdad) {  // Llama al constructor del padre
        cargo = elCargo;
        salario = elSalario;
    }
    
    void verEmpleado();
};

// Implementación
Persona::Persona(string elNombre, int laEdad) {
    nombre = elNombre;
    edad = laEdad;
}

void Persona::verPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Empleado::verEmpleado() {
    verPersona();  // Llama al método del padre
    cout << "Cargo: " << cargo << endl;
    cout << "Salario: " << salario << endl;
}

int main() {
    Empleado empleado1 = Empleado("Camila Soto", 19, "Recepcionista", 890000);
    empleado1.verEmpleado();
}
```

---

## Polimorfismo

```cpp
// Clase padre con método virtual
class Persona {
   private:
    string nombre;
    int edad;

   public:
    Persona(string elNombre, int laEdad);
    
    // Método virtual permite polimorfismo
    virtual void ver();
};

// Clases hijas que sobrescriben el método
class Empleado : public Persona {
   private:
    string cargo;

   public:
    Empleado(string elNombre, int laEdad, string elCargo)
        : Persona(elNombre, laEdad) {
        cargo = elCargo;
    }
    
    // Sobrescribe el método del padre
    void ver() {
        Persona::ver();  // Llama al método del padre
        cout << "Cargo: " << cargo << endl;
    }
};

class Socio : public Persona {
   private:
    int porcentaje;

   public:
    Socio(string elNombre, int laEdad, int elPorcentaje)
        : Persona(elNombre, laEdad) {
        porcentaje = elPorcentaje;
    }
    
    // Sobrescribe el método del padre
    void ver() {
        Persona::ver();
        cout << "Porcentaje: " << porcentaje << endl;
    }
};

// Implementación
void Persona::ver() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

int main() {
    // Mismo método, comportamiento diferente según el objeto
    Socio socio1 = Socio("Andres Herrera", 43, 51);
    Persona persona1 = Persona("Camila Soto", 19);
    
    socio1.ver();    // Muestra nombre, edad y porcentaje
    persona1.ver();  // Solo muestra nombre y edad
}
```

---

## Archivos de Encabezado (.h)

```cpp
// archivo.h - Declaración de la clase
#pragma once  // Evita inclusión múltiple
#include <iostream>
#include <string>

class MiClase {
   private:
    string dato;
    
   public:
    MiClase(string d);
    void mostrar();
};

// archivo.cpp - Implementación de la clase
#include "archivo.h"

MiClase::MiClase(string d) {
    dato = d;
}

void MiClase::mostrar() {
    cout << dato << endl;
}

// main.cpp - Uso de la clase
#include "archivo.h"

int main() {
    MiClase objeto("Hola");
    objeto.mostrar();
}
```

---

## Namespaces

```cpp
// Definir un namespace
namespace zoologico {

class Animal {
   private:
    string especie;
    
   public:
    Animal(string nombre);
    void comer();
};

class Mamifero : public Animal {
   public:
    Mamifero(string nombre) : Animal(nombre) {}
    void amamantar();
};

}  // namespace zoologico

// Usar el namespace
int main() {
    zoologico::Animal animal1("Perro");
    zoologico::Mamifero mamifero1("Gato");
    
    animal1.comer();
    mamifero1.amamantar();
}

// Alternativamente, usar "using"
using namespace zoologico;

int main() {
    Animal animal1("Perro");      // Ya no necesita el prefijo
    Mamifero mamifero1("Gato");
}
```

---

## Herencia Avanzada y Polimorfismo

```cpp
namespace zoologico {

// Clase base con métodos virtuales
class Animal {
   protected:
    string sonido;  // Protected: accesible por clases hijas
    
   private:
    string especie;
    float peso;
    
   public:
    Animal(const string& name, float weight, const string& sound)
        : especie(name), peso(weight), sonido(sound) {}
    
    // Destructor virtual
    virtual ~Animal() {
        cout << "Destructor del objeto " << especie << endl;
    }
    
    void comer() {
        cout << especie << " está comiendo" << endl;
    }
    
    // Método virtual para polimorfismo
    virtual void hacerSonido() {
        cout << sonido << " generico" << endl;
    }
    
    // Getter
    string getEspecie() const { return especie; }
    
    // Método virtual para mostrar información
    virtual void mostrarInfo() const {
        cout << "Especie: " << especie << endl;
        cout << "Peso: " << peso << "kg" << endl;
    }
};

// Clase hija: Mamífero
class Mamifero : public Animal {
   private:
    string colorPelo;
    string tipoPelaje;
    
   public:
    Mamifero(const string& n, float w, const string& s,
             const string& furColor, const string& furType)
        : Animal(n, w, s),
          colorPelo(furColor),
          tipoPelaje(furType) {}
    
    void amamantar() {
        cout << getEspecie() << " está amamantando" << endl;
    }
    
    // Sobrescribir método virtual (override)
    void hacerSonido() override {
        cout << getEspecie() << " ha hecho un " << sonido << endl;
    }
    
    // Sobrescribir mostrarInfo
    void mostrarInfo() const override {
        Animal::mostrarInfo();  // Llama al método del padre
        cout << "Color del pelo: " << colorPelo << endl;
        cout << "Tipo de pelaje: " << tipoPelaje << endl;
    }
};

// Clase hija: Ave
class Ave : public Animal {
   private:
    float longitudPico;
    string colorPlumas;
    bool puedeVolar;
    
   public:
    Ave(const string& n, float w, const string& s,
        float beakLength, const string& featherColor, bool canFly)
        : Animal(n, w, s),
          longitudPico(beakLength),
          colorPlumas(featherColor),
          puedeVolar(canFly) {}
    
    void volar() {
        puedeVolar ? cout << getEspecie() << " está volando" << endl
                   : cout << getEspecie() << " no puede volar" << endl;
    }
    
    void hacerSonido() override {
        cout << getEspecie() << " canta con " << sonido << endl;
    }
    
    void mostrarInfo() const override {
        Animal::mostrarInfo();
        cout << "Longitud del pico: " << longitudPico << "cm" << endl;
        cout << "Color de las plumas: " << colorPlumas << endl;
    }
};

}  // namespace zoologico

// Uso
int main() {
    zoologico::Ave pajarito("Loro", 1.3, "Cacareo", 5, "Verde", true);
    zoologico::Mamifero lobo("Husky", 39.1, "Ladrido", "Blanco", "Suave");
    
    pajarito.mostrarInfo();
    pajarito.hacerSonido();
    pajarito.volar();
    
    lobo.mostrarInfo();
    lobo.hacerSonido();
    lobo.amamantar();
}
```

---

## Templates (Plantillas)

```cpp
// Template de clase - funciona con cualquier tipo de dato
template <typename T>
class Ops_Maths {
   private:
    // Convertir T a double
    static double convertir(const T& valor) {
        if constexpr (std::is_same_v<T, char>)
            return static_cast<int>(valor - '0');
        else
            return static_cast<double>(valor);
    }
    
   protected:
    T a{0}, b{0}, c{0};
    
   public:
    // Constructor por defecto
    Ops_Maths() = default;
    
    // Constructor parametrizado
    Ops_Maths(T a, T b, T c) : a(a), b(b), c(c) {}
    
    // Métodos que funcionan con cualquier tipo
    double suma() const {
        return convertir(a) + convertir(b) + convertir(c);
    }
    
    double resta() const {
        return convertir(a) - convertir(b) - convertir(c);
    }
    
    double multiplicacion() const {
        return convertir(a) * convertir(b) * convertir(c);
    }
    
    double division() const {
        double numB = convertir(b);
        if (numB == 0) {
            cout << "Error: división por cero" << endl;
            return NAN;  // Not a Number
        }
        return convertir(a) / numB;
    }
    
    double potencia() const {
        return pow(convertir(a), convertir(b));
    }
    
    void mostrar() const {
        cout << "Suma: " << suma() << endl;
        cout << "Resta: " << resta() << endl;
        cout << "Multiplicación: " << multiplicacion() << endl;
        cout << "División: " << division() << endl;
        cout << "Potencia: " << potencia() << endl;
    }
};

// Uso con diferentes tipos
int main() {
    Ops_Maths<int> enteros(5, 2, 1);
    Ops_Maths<char> caracteres('6', '3', '2');
    Ops_Maths<double> flotantes(5.5, 2.5, 1.0);
    
    cout << "Enteros:" << endl;
    enteros.mostrar();
    
    cout << "\nCaracteres:" << endl;
    caracteres.mostrar();
    
    cout << "\nFlotantes:" << endl;
    flotantes.mostrar();
}
```

---

## Sobrecarga de Métodos

```cpp
// Múltiples versiones del mismo método con diferentes parámetros
class Calculadora {
   public:
    // Suma de 2 números
    double suma(int x, int y) {
        return x + y;
    }
    
    // Suma de 3 números
    double suma(int x, int y, int z) {
        return x + y + z;
    }
    
    // División simple
    double division(int x, int y) {
        if (y == 0) {
            cout << "Error: división por cero" << endl;
            return NAN;
        }
        return static_cast<double>(x) / y;
    }
};

int main() {
    Calculadora calc;
    
    cout << "Suma (5,7): " << calc.suma(5, 7) << endl;
    cout << "Suma (5,7,2): " << calc.suma(5, 7, 2) << endl;
    cout << "División (6,3): " << calc.division(6, 3) << endl;
}
```

---

## Sobrecarga de Operadores

```cpp
// Clase para números complejos
class NumeroImaginario {
    // Declarar operadores como friend para acceder a atributos privados
    friend NumeroImaginario operator+(NumeroImaginario, NumeroImaginario);
    friend NumeroImaginario operator-(NumeroImaginario, NumeroImaginario);
    friend NumeroImaginario operator*(NumeroImaginario, NumeroImaginario);
    friend NumeroImaginario operator/(NumeroImaginario, NumeroImaginario);
    
   private:
    double parteReal;
    double parteImaginaria;
    
   public:
    // Constructores
    NumeroImaginario() : parteReal(0.0), parteImaginaria(0.0) {}
    
    NumeroImaginario(double real, double imaginaria)
        : parteReal(real), parteImaginaria(imaginaria) {}
    
    // Getters y Setters
    double getParteReal() { return parteReal; }
    double getParteImaginaria() { return parteImaginaria; }
    void setParteReal(double real) { parteReal = real; }
    void setParteImaginaria(double imag) { parteImaginaria = imag; }
    
    // Mostrar número complejo
    void Muestra() {
        if (parteImaginaria >= 0)
            cout << parteReal << " + " << parteImaginaria << "i";
        else
            cout << parteReal << " - " << fabs(parteImaginaria) << "i";
    }
};

// Sobrecarga del operador + (suma)
// (a + bi) + (c + di) = (a+c) + (b+d)i
NumeroImaginario operator+(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    resultado.parteReal = n1.parteReal + n2.parteReal;
    resultado.parteImaginaria = n1.parteImaginaria + n2.parteImaginaria;
    return resultado;
}

// Sobrecarga del operador - (resta)
NumeroImaginario operator-(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    resultado.parteReal = n1.parteReal - n2.parteReal;
    resultado.parteImaginaria = n1.parteImaginaria - n2.parteImaginaria;
    return resultado;
}

// Sobrecarga del operador * (multiplicación)
// (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
NumeroImaginario operator*(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    resultado.parteReal = (n1.parteReal * n2.parteReal) -
                          (n1.parteImaginaria * n2.parteImaginaria);
    resultado.parteImaginaria = (n1.parteReal * n2.parteImaginaria) +
                                (n1.parteImaginaria * n2.parteReal);
    return resultado;
}

// Sobrecarga del operador / (división)
NumeroImaginario operator/(NumeroImaginario n1, NumeroImaginario n2) {
    NumeroImaginario resultado;
    double denominador = (n2.parteReal * n2.parteReal) +
                         (n2.parteImaginaria * n2.parteImaginaria);
    
    if (denominador == 0) {
        cout << "¡ERROR! División por cero" << endl;
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

// Uso de operadores sobrecargados
int main() {
    NumeroImaginario num1(3, 4);  // 3 + 4i
    NumeroImaginario num2(1, 2);  // 1 + 2i
    
    NumeroImaginario suma = num1 + num2;      // Usa operador +
    NumeroImaginario resta = num1 - num2;     // Usa operador -
    NumeroImaginario multi = num1 * num2;     // Usa operador *
    NumeroImaginario div = num1 / num2;       // Usa operador /
    
    cout << "Suma: "; suma.Muestra(); cout << endl;
    cout << "Resta: "; resta.Muestra(); cout << endl;
    cout << "Multiplicación: "; multi.Muestra(); cout << endl;
    cout << "División: "; div.Muestra(); cout << endl;
}
```

---

## Memoria Dinámica con new y delete

```cpp
// Arreglos dinámicos
int main() {
    int cantidad;
    cout << "Cantidad de elementos: ";
    cin >> cantidad;
    
    // Crear arreglo dinámico
    string* nombres = new string[cantidad];
    
    // Usar el arreglo
    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre " << i + 1 << ": ";
        getline(cin, nombres[i]);
    }
    
    // Liberar memoria
    delete[] nombres;
    
    return 0;
}

// Matrices dinámicas (arrays bidimensionales)
class SistemaVentas {
   private:
    string* nombresVendedores;  // Arreglo dinámico
    double** ventasMensuales;   // Matriz dinámica (puntero a punteros)
    int cantidadVendedores;
    const int MESES{4};
    
   public:
    // Constructor - crear memoria dinámica
    SistemaVentas(int cantidad) : cantidadVendedores(cantidad) {
        // Crear arreglo de strings
        nombresVendedores = new string[cantidadVendedores];
        
        // Crear matriz 2D
        ventasMensuales = new double*[cantidadVendedores];  // Filas
        for (int i = 0; i < cantidadVendedores; i++) {
            ventasMensuales[i] = new double[MESES];  // Columnas
        }
    }
    
    // Destructor - liberar memoria
    ~SistemaVentas() {
        delete[] nombresVendedores;
        
        // Liberar cada fila de la matriz
        for (int i = 0; i < cantidadVendedores; i++) {
            delete[] ventasMensuales[i];
        }
        // Liberar el arreglo de punteros
        delete[] ventasMensuales;
    }
    
    void tomarDatos() {
        for (int i = 0; i < cantidadVendedores; i++) {
            cout << "Vendedor " << (i + 1) << ": ";
            cin.ignore();
            getline(cin, nombresVendedores[i]);
            
            for (int mes = 0; mes < MESES; mes++) {
                cout << "Mes " << (mes + 1) << ": $";
                cin >> ventasMensuales[i][mes];
            }
        }
    }
};

int main() {
    int cantidad;
    cin >> cantidad;
    
    // Crear objeto dinámicamente
    SistemaVentas* sistema = new SistemaVentas(cantidad);
    
    sistema->tomarDatos();
    
    // Liberar memoria (llama al destructor)
    delete sistema;
    
    return 0;
}
```

---

## Manejo de Archivos

```cpp
#include <fstream>  // Para manejo de archivos

// Escribir en archivo
void escribirArchivo() {
    ofstream archivo("datos.txt");  // Abrir archivo para escritura
    
    if (!archivo) {
        cout << "Error al crear el archivo" << endl;
        return;
    }
    
    archivo << "Línea 1 de texto" << endl;
    archivo << "Línea 2 de texto" << endl;
    archivo << "Número: " << 42 << endl;
    
    archivo.close();  // Cerrar archivo
}

// Leer de archivo
void leerArchivo() {
    ifstream archivo("datos.txt");  // Abrir archivo para lectura
    
    if (!archivo) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    
    archivo.close();
}

// Ejemplo con log de operaciones
void escribirLog(ofstream& archivo, string operacion,
                 NumeroImaginario n1, NumeroImaginario n2,
                 NumeroImaginario resultado) {
    archivo << "Operación: " << operacion << endl;
    archivo << "  Número 1: " << n1.toString() << endl;
    archivo << "  Número 2: " << n2.toString() << endl;
    archivo << "  Resultado: " << resultado.toString() << endl;
    archivo << "----------------------------------------" << endl;
}

int main() {
    ofstream archivoLog("operaciones_log.txt");
    
    if (!archivoLog) {
        cout << "Error al crear el archivo" << endl;
        return 1;
    }
    
    NumeroImaginario num1(3, 4);
    NumeroImaginario num2(1, 2);
    NumeroImaginario suma = num1 + num2;
    
    escribirLog(archivoLog, "SUMA", num1, num2, suma);
    
    archivoLog.close();
    
    cout << "Revise el archivo 'operaciones_log.txt'" << endl;
    
    return 0;
}
```

---

## Formato de Salida con iomanip

```cpp
#include <iomanip>  // Para manipuladores de formato

void mostrarTabla() {
    // fixed: decimales fijos
    // setprecision(2): 2 decimales
    cout << fixed << setprecision(2);
    
    // setw(N): ancho de columna en N caracteres
    // left: alinea a la izquierda
    // right: alinea a la derecha
    cout << left << setw(15) << "Producto"
         << right << setw(10) << "Precio"
         << setw(10) << "Cantidad" << endl;
    
    // string(N, '-'): crea N guiones
    cout << string(35, '-') << endl;
    
    cout << left << setw(15) << "Laptop"
         << right << setw(10) << 1500.50
         << setw(10) << 5 << endl;
    
    cout << left << setw(15) << "Mouse"
         << right << setw(10) << 25.99
         << setw(10) << 15 << endl;
}

// Ejemplo con sistema de ventas
void generarInforme() {
    cout << fixed << setprecision(2);
    cout << left << setw(15) << "Vendedor"
         << right << setw(15) << "Mes 1"
         << setw(15) << "Mes 2"
         << setw(15) << "Promedio" << endl;
    
    cout << string(60, '-') << endl;
    
    cout << left << setw(15) << "Juan"
         << right << setw(15) << 1500.50
         << setw(15) << 1800.75
         << setw(15) << 1650.63 << endl;
}
```

---

#### Desarrollado por Luis Ariza
