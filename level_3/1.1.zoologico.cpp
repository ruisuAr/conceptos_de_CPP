// Uso de clases, herencia y polimorfismo en C++

#include "1.3.Mamifero_class.h"
#include "1.4.Ave_class.h"
#include "1.5.Reptil_class.h"

using namespace std;

namespace zoologico {

// Constructor Animal
Animal::Animal(const string& name, float weight, const string& typeFood,
               const string& sound)
    : especie_(name), peso_(weight), alimentacion_(typeFood), sonido(sound) {}

// Métodos
void Animal::comer() { cout << especie_ << " está comiendo\n"; }

// Constructor Mamifero
Mamifero::Mamifero(const string& n, float w, const string& tf, const string& s,
                   const string& furColor, const string& furType)
    : zoologico::Animal(n, w, tf, s),
      colorPelo_(furColor),
      tipoPelaje_(furType) {}

// Métodos específicos
void Mamifero::amamantar() {
    cout << getEspecie() << " está amamantando a sus crías\n";
}

// Constructor Ave
Ave::Ave(const string& n, float w, const string& tf, const string& s,
         float beakLength, const string& featherColor, bool canFly)
    : zoologico::Animal(n, w, tf, s),
      longitudPico_(beakLength),
      colorPlumas_(featherColor),
      puedeVolar_(canFly) {}

// Métodos específicos
void Ave::volar() {
    puedeVolar_ ? cout << getEspecie() << " está volando\n"
                : cout << getEspecie() << " no puede volar\n";
}

// Constructor Reptil
Reptil::Reptil(const string& n, float w, const string& tf, const string& s,
               const string& scaleType, bool venomous)
    : zoologico::Animal(n, w, tf, s),
      tipoEscamas_(scaleType),
      esVenenoso_(venomous) {}
// Métodos específicos
void Reptil::mudarPiel() { cout << getEspecie() << " está mudando su piel\n"; }
void Reptil::Mordida() {
    esVenenoso_ ? cout << getEspecie() << " ha mordido y es venenoso!\n"
                : cout << getEspecie() << " ha mordido pero no es venenoso\n";
}

}  // namespace zoologico

int main() {
    zoologico::Ave pajarito("Loro", 1.3, "Herbívoro", "Cacareo", 5,
                            "Verde brillante", true);
    zoologico::Reptil lagartote("Dragón de Komodo", 72.4, "Carnívoro", "Rugido",
                                "Rugosas", true);
    zoologico::Mamifero lobo("Husky", 39.1, "Carnívora", "Ladrido fuerte",
                             "Blanco nieve", "Suave, denso y largo");

    cout << "Estamos observando varios animales en el zoologico" << endl;

    cout << "\nMira esa ave!!\n";
    pajarito.mostrarInfo();
    pajarito.comer();
    pajarito.hacerSonido();
    pajarito.volar();

    cout << "\nCuidado! puede ser peligroso ese reptil\n";
    lagartote.mostrarInfo();
    lagartote.comer();
    lagartote.hacerSonido();
    lagartote.Mordida();
    lagartote.mudarPiel();

    cout << "\nQue linda perrita!\n";
    lobo.mostrarInfo();
    lobo.comer();
    lobo.hacerSonido();
    lobo.amamantar();

    return 0;
}