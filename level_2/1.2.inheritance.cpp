#include <stdlib.h>

#include <iostream>
using namespace std;

class Persona {
   private:
    string nombre;
    int edad;

   public:
    Persona(string, int);
    void verPersona();
};
// Se define la clase Empleado y para indicar que es una clase hija; es decir,
// que hereda de la clase Persona, se escriben los dos puntos, la palabra public
// y el nombre de la clase padre. En este caso el public significa que la clase
// Empleado puede manipular todos los elementos públicos de la clase Persona.
class Empleado : public Persona {
   private:
    string cargo;
    float salario;

   public:
    Empleado(string, int, string, float);
    void verEmpleado();
};

Persona::Persona(string elNombre, int laEdad) {
    nombre = elNombre;
    edad = laEdad;
}
// Se inicializa el constructor, para lo cual debe indicarse el nombre(Empleado)
// y de qué tipo es(Empleado) y a continuación entre paréntesis los datos que
// recibe con su respectivo tipo.Teniendo en cuenta que esta es la clase hija,
// deben incluirse tanto los atributos heredados como los propios; sin embargo,
// los datos de los atributos heredados ya fueron indicados, razón por la cual
// deben ponerse al final los dos puntos( :),el nombre de la clase padre y los
// atributos inicializados en el constructor de dicha clase.
Empleado::Empleado(string elNombre, int laEdad, string elCargo, float elSalario)
    : Persona(elNombre, laEdad) {
    cargo = elCargo;
    salario = elSalario;
}
void Empleado::verEmpleado() {
    // Se llama al método verPersona de la clase padre para mostrar los datos
    // heredados
    verPersona();
    cout << "Cargo: " << cargo << endl;
    cout << "Salario: " << salario << endl;
}
void Persona::verPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

int main() {
    // Se crea el objeto llamado empleado1 de la clase Empleado inicializando
    // tanto los atributos heredados como los propios
    Empleado empleado1 = Empleado("Camila Soto", 19, "Recepcionista", 890000);

    empleado1.verEmpleado();

    system("pause");
    return 0;
}