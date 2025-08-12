// Generar pagos de nómina
// Módulo y estructura del lenguaje C++: Actividad 3 - Evidencia 2
// Desarrollado por Luis Manuel Ariza Pineda

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

// Variables globales para almacenar la información de los empleados
const int MAX = 25;  // Cantidad maxima de empleados
int num_empleados;   // Número de empleados

string nombres[MAX], cargos[MAX];
long cedulas[MAX], telefonos[MAX];
int salarios[MAX], horas_extras[MAX], desc_prestamo[MAX], ahorro_vol[MAX],
    desc_SS[MAX], pago_total[MAX];

// Prototipos de funciones para diligenciar la información
void empleado();
void labor_empleado();
void calcular_pago();
void mostrar_pago();

int main() {
  cout << "Ingrese el numero de empleados: ";
  cin >> num_empleados;
  cin.ignore();  // limpiar buffer de entrada
  system("clear");

  empleado();
  labor_empleado();
  calcular_pago();
  mostrar_pago();

  return 0;
}

// Función para diligenciar datos del empleado
void empleado() {
  for (int i = 0; i < num_empleados; i++) {
    cout << "Empleado #" << i + 1 << "\n" << endl;
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
    cout << endl;
  }
  system("clear");
}

// Función para diligenciar datos de labor del empleado
void labor_empleado() {
  for (int i = 0; i < num_empleados; i++) {
    cout << "--- Datos de labor para " << nombres[i] << " ---" << endl;
    cout << "Horas extras laboradas: ";
    cin >> horas_extras[i];
    cout << "Descuento por prestamo: $";
    cin >> desc_prestamo[i];
    cout << "Ahorro voluntario: $";
    cin >> ahorro_vol[i];
    cout << "Descuento por seguridad social: $";
    cin >> desc_SS[i];
    cout << endl;
  }
  system("clear");
}

// Función para calcular el pago total del empleado
void calcular_pago() {
  for (int i = 0; i < num_empleados; i++) {
    int pagoHorasExtras = horas_extras[i] * (salarios[i] / 240);
    pago_total[i] = salarios[i] + pagoHorasExtras - desc_prestamo[i] -
                    ahorro_vol[i] - desc_SS[i];
  }
}

// Función para mostrar el informe de pago de los empleados
void mostrar_pago() {
  cout << "INFORME DE PAGO DE LOS EMPLEADOS\n";
  for (int i = 0; i < num_empleados; i++) {
    cout << "\nEmpleado: " << nombres[i] << endl;
    cout << "Cedula: " << cedulas[i] << endl;
    cout << "Telefono: " << telefonos[i] << endl;
    cout << "Cargo: " << cargos[i] << endl;
    cout << "Salario Basico: $" << salarios[i] << endl;
    cout << "Horas Extras: " << horas_extras[i] << endl;
    cout << "Descuento por Prestamo: $" << desc_prestamo[i] << endl;
    cout << "Ahorro Voluntario: $" << ahorro_vol[i] << endl;
    cout << "Descuento por Seguridad Social: $" << desc_SS[i] << endl;
    cout << "Pago Total: $" << pago_total[i] << endl;
  }
}