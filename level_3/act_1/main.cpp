// Uso de clases, herencia y polimorfismo en C++

#include <iostream>

#include "Ave_class.h"
#include "Mamifero_class.h"
#include "Reptil_class.h"

using namespace std;

namespace zoologico {

// Constructor
Animal::Animal(string name, float weight, string typeFood, string sound)
    : raza_(name), peso_(weight), tipoALimentacion_(typeFood), sonido(sound) {}

// Métodos
void Animal::comer() { cout << raza_ << " está comiendo" << endl; }

}  // namespace zoologico

namespace mamifero {

// Constructor
Mamifero::Mamifero(string n, float w, string tf, string s, string furColor,
                   string furType)
    : zoologico::Animal(n, w, tf, s),
      colorPelo_(furColor),
      tipoPelaje_(furType) {}

// Métodos específicos
void Mamifero::amamantar() {
    cout << getRaza() << " está amamantando a sus crías" << endl;
}

}  // namespace mamifero

namespace ave {

// Constructor
Ave::Ave(string n, float w, string tf, string s, float beakLength,
         string featherColor, bool canFly)
    : zoologico::Animal(n, w, tf, s),
      longitudPico_(beakLength),
      colorPlumas_(featherColor),
      puedeVolar_(canFly) {}

// Métodos específicos
void Ave::volar() {
    if (puedeVolar_)
        cout << getRaza() << " está volando" << endl;
    else
        cout << getRaza() << " no puede volar" << endl;
}

}  // namespace ave

namespace reptil {
// Constructor
Reptil::Reptil(string n, float w, string tf, string s, string scaleType,
               bool venomous)
    : zoologico::Animal(n, w, tf, s),
      tipoEscamas_(scaleType),
      esVenenoso_(venomous) {}
// Métodos específicos
void Reptil::mudarPiel() {
    cout << getRaza() << " está mudando su piel" << endl;
}
void Reptil::Mordida() {
    if (esVenenoso_)
        cout << getRaza() << " ha mordido y es venenoso!" << endl;
    else
        cout << getRaza() << " ha mordido pero no es venenoso" << endl;
}

}  // namespace reptil

int main() {
    ave::Ave pajarito("Loro", 1.5, "Herbívoro", "Cacareo", 10,
                      "Verde brillante", true);
    reptil::Reptil lagartote("Dragón de Komodo", 70.0, "Carnívoro", "Rugido",
                             "Escamas rugosas", true);
    mamifero::Mamifero lobo("Husky", 40.0, "Carnívora", "Ladrido fuerte",
                            "Blanco nieve", "Suave, denso y largo");

    cout << "Estamos observando varios animales en el zoologico" << endl;
    cout << "\nMira es un ";
    pajarito.showRaza();
    pajarito.showColorPlumas();
    pajarito.comer();
    pajarito.hacerSonido();
    pajarito.volar();

    cout << "\nCuidado es un ";
    lagartote.showRaza();
    cout << "Peso: ";
    lagartote.showPeso();
    lagartote.hacerSonido();
    lagartote.showTipoEscamas();
    cout << "¿Es venenoso?: ";
    lagartote.showEsVenenoso();

    cout << "\nQue linda! es una ";
    lobo.showRaza();
    cout << "Su pelo es ";
    lobo.showTipoPelaje();
    lobo.showColorPelo();
    lobo.hacerSonido();
    lobo.amamantar();

    return 0;
}