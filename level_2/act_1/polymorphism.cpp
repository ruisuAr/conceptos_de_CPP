#include <stdlib.h>

#include <iostream>
using namespace std;

class Persona {
   private:
    string nombre;
    int edad;

   public:
    Persona(string, int);
    // se incluye un método que será invocado en diferentes funciones y es en
    // este donde se ve reflejado el polimorfismo del programa.Para incluir
    // polimorfismo se utiliza la palabra reservada del lenguaje virtual, la
    // cual indica que se trata de un método de polimorfismo y únicamente se
    // utiliza en la clase padre
    virtual void ver();
};

// Observarse se encuentra en las líneas 31 y 40 donde se declara el método
// ver() con igual nombre para ambas clases.Es aquí donde el polimorfismo
// muestra su funcionalidad, ya que se envía la misma acción en todas las
// clases, pero cada una de ellas la procesa de manera distinta
class Empleado : public Persona {
   private:
    string cargo;

   public:
    Empleado(string, int, string);
    void ver();
};

class Socio : public Persona {
   private:
    int porcentaje;

   public:
    Socio(string, int, int);
    void ver();
};

Persona::Persona(string elNombre, int laEdad) {
    nombre = elNombre;
    edad = laEdad;
}
void Persona::ver() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
Empleado::Empleado(string elNombre, int laEdad, string elCargo)
    : Persona(elNombre, laEdad) {
    cargo = elCargo;
}
void Empleado::ver() {
    Persona::ver();
    cout << "Cargo: " << cargo << endl;
}
Socio::Socio(string elNombre, int laEdad, int elPorcentaje)
    : Persona(elNombre, laEdad) {
    porcentaje = elPorcentaje;
}
void Socio::ver() {
    Persona::ver();
    cout << "Porcentaje: " << porcentaje << endl;
}

// Tanto en la línea 78 como en la 79 se va a ejecutar el mismo método, pero
// gracias al polimorfismo cada clase con la misma acción efectuará cosas
// diferentes dado que en Persona, solamente, se deben mostrar el nombre y la
// edad; en cambio, en Socio debe ser visualizado, además del nombre y la edad,
// el porcentaje
int main() {
    Socio socio1 = Socio("Andres Herrera", 43, 51);
    Persona persona1 = Persona("Camila Soto", 19);

    socio1.ver();
    persona1.ver();

    system("pause");
    return 0;
}