// Uso de clases y sobrecarga de operadores en C++

#include "4.2.Numero_Imaginario_class.h"
using namespace std;

// Constructor por defecto: inicializa en 0 + 0i
NumeroImaginario::NumeroImaginario() {
    parteReal = 0.0;
    parteImaginaria = 0.0;
}

// Constructor parametrizado
NumeroImaginario::NumeroImaginario(double real, double imaginaria) {
    parteReal = real;
    parteImaginaria = imaginaria;
}

// Metodos de acceso
double NumeroImaginario::getParteReal() { return parteReal; }

double NumeroImaginario::getParteImaginaria() { return parteImaginaria; }

void NumeroImaginario::setParteReal(double real) { parteReal = real; }

void NumeroImaginario::setParteImaginaria(double imaginaria) {
    parteImaginaria = imaginaria;
}

// Método de visualización
void NumeroImaginario::Muestra() {
    if (parteImaginaria >= 0)
        cout << parteReal << " + " << parteImaginaria << "i";
    else
        cout << parteReal << " - " << fabs(parteImaginaria) << "i";
}

string NumeroImaginario::toString() {
    string resultado;
    if (parteImaginaria >= 0)
        resultado =
            to_string(parteReal) + " + " + to_string(parteImaginaria) + "i";
    else
        resultado = to_string(parteReal) + " - " +
                    to_string(fabs(parteImaginaria)) + "i";
    return resultado;
}

// Función para escribir en el archivo de log
void escribirLog(ofstream& archivo, string operacion, NumeroImaginario n1,
                 NumeroImaginario n2, NumeroImaginario resultado) {
    archivo << "Operación: " << operacion << endl;
    archivo << "  Número 1: " << n1.toString() << endl;
    archivo << "  Número 2: " << n2.toString() << endl;
    archivo << "  Resultado: " << resultado.toString() << endl;
    archivo << "----------------------------------------" << endl;
}

int main() {
    // Abrir archivo de log
    ofstream archivoLog("operaciones_log.txt");

    if (!archivoLog) {
        cout << "Error al crear el archivo de log" << endl;
        return 1;
    }

    archivoLog << "========================================" << endl;
    archivoLog << "LOG DE OPERACIONES CON NÚMEROS COMPLEJOS" << endl;
    archivoLog << "========================================" << endl << endl;

    cout << "\n=== CALCULADORA DE NÚMEROS COMPLEJOS ===" << endl;

    // Variables para almacenar los números
    double real1, imag1, real2, imag2;

    // Solicitar primer número complejo
    cout << "\nIngrese el primer número complejo." << endl;
    cout << "Parte real: ";
    cin >> real1;
    cout << "Parte imaginaria: ";
    cin >> imag1;

    NumeroImaginario num1(real1, imag1);

    // Solicitar segundo número complejo
    cout << "\nIngrese el segundo número complejo." << endl;
    cout << "Parte real: ";
    cin >> real2;
    cout << "Parte imaginaria: ";
    cin >> imag2;

    NumeroImaginario num2(real2, imag2);

    // Mostrar los números ingresados
    cout << "\n=== NÚMEROS INGRESADOS ===" << endl;
    cout << "Número 1: ";
    num1.Muestra();
    cout << endl;
    cout << "Número 2: ";
    num2.Muestra();
    cout << endl;

    // Realizar y mostrar operaciones
    cout << "\n=== RESULTADOS DE LAS OPERACIONES ===" << endl;

    // SUMA
    NumeroImaginario suma = num1 + num2;
    cout << "\nSUMA: ";
    num1.Muestra();
    cout << " + ";
    num2.Muestra();
    cout << " = ";
    suma.Muestra();
    cout << endl;
    escribirLog(archivoLog, "SUMA", num1, num2, suma);

    // RESTA
    NumeroImaginario resta = num1 - num2;
    cout << "\nRESTA: ";
    num1.Muestra();
    cout << " - ";
    num2.Muestra();
    cout << " = ";
    resta.Muestra();
    cout << endl;
    escribirLog(archivoLog, "RESTA", num1, num2, resta);

    // MULTIPLICACIÓN
    NumeroImaginario multiplicacion = num1 * num2;
    cout << "\nMULTIPLICACIÓN: ";
    num1.Muestra();
    cout << " * ";
    num2.Muestra();
    cout << " = ";
    multiplicacion.Muestra();
    cout << endl;
    escribirLog(archivoLog, "MULTIPLICACIÓN", num1, num2, multiplicacion);

    // DIVISIÓN
    NumeroImaginario division = num1 / num2;
    cout << "\nDIVISIÓN: ";
    num1.Muestra();
    cout << " / ";
    num2.Muestra();
    cout << " = ";
    division.Muestra();
    cout << endl;
    escribirLog(archivoLog, "DIVISIÓN", num1, num2, division);

    // Cerrar archivo de log
    archivoLog << "\nFin del registro de operaciones" << endl;
    archivoLog.close();

    cout << "\n¡Operaciones completadas!\n" << endl;
    cout << "Revise el archivo 'operaciones_log.txt' para ver el registro "
            "completo.\n"
         << endl;

    return 0;
}