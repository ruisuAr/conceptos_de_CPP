#include <stdlib.h>

#include <iostream>
using namespace std;
class Cliente {
  // Nivel de encapsulacion privado - solo la misma clase puede acceder a los
  // atributos
 private:
  string cedula;
  string nombre;
  string telefono;

  // Nivel de encapsulacion publico - cualquier parte del programa puede acceder
  // a los metodos
 public:
  // Método constructor de la clase que sirve para inicializar las variables,
  // debe tener el mismo nombre de la clase y entre paréntesis los tipos de los
  // datos a inicializar
  Cliente(string, string, string);
  void comprar();
  void alquilar();
};

// Se inicializa el constructor para lo cual debe indicarse el nombre (Cliente)
// y de qué tipo es (Cliente) y a continuación entre paréntesis los datos que
// recibe con su respectivo tipo, usualmente se utiliza un nombre diferente al
// que se dio a las variables
Cliente::Cliente(string laCedula, string elNombre, string elTelefono) {
  // Se indica que los atributos deben ser iguales a las nuevas variables que
  // serán ingresadas cuando se cree el objeto
  cedula = laCedula;
  nombre = elNombre;
  telefono = elTelefono;
}
// Se definen los métodos de la clase, que son las acciones que se pueden
// realizar con los objetos de la clase Cliente. En este caso, se definen dos
// métodos: comprar y alquilar
void Cliente::comprar() {
  cout << "El cliente " << nombre << " ha comprado un videojuego" << endl;
}
void Cliente::alquilar() {
  cout << "Videojuego alquilado a " << nombre << " con documento " << cedula
       << endl;
  cout << "En caso de demoras en la entrega llamar al " << telefono << endl;
}

int main() {
  Cliente cliente1 = Cliente("10278548", "Luis Hurtado", "3156478524");
  Cliente cliente2 = Cliente("24342548", "Andrea Moreno", "2627788");

  cliente1.alquilar();
  cliente2.comprar();

  system("pause");
  return 0;
}