#include "Animal_class.h"

namespace reptil {

class Reptil : public zoologico::Animal {
   private:
    // Atributos específicos
    std::string tipoEscamas_;
    bool esVenenoso_;

   public:
    // Constructor
    Reptil(std::string n, float w, std::string tf, std::string s,
           std::string scaleType, bool venomous);

    // Métodos específicos
    void mudarPiel();
    void Mordida();
    void showTipoEscamas() { std::cout << tipoEscamas_ << std::endl; }
    void showEsVenenoso() {
        std::cout << (esVenenoso_ ? "Sí" : "No") << std::endl;
    }

    // Método sobrescrito, se ejecuta el de la clase base
    // void hacerSonido() override { std::cout << sonido << std::endl; };
};

}  // namespace reptil