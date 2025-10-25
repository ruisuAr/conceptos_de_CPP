#include "1.2.Animal_class.h"

namespace zoologico {

class Reptil : public zoologico::Animal {
   private:
    // Atributos específicos
    std::string tipoEscamas_;
    bool esVenenoso_;

   public:
    // Constructor
    Reptil(const std::string& n, float w, const std::string& tf,
           const std::string& s, const std::string& scaleType, bool venomous);

    // Métodos específicos
    void mudarPiel();
    void Mordida();
    // Método sobrescrito por polimorfismo
    void hacerSonido() override {
        std::cout << getEspecie() << " ha " << sonido
                  << ", se siente amenazado!\n";
    }
    // Getters específicos
    void mostrarInfo() const override {
        Animal::mostrarInfo();
        std::cout << "Tipo de escamas: " << tipoEscamas_ << "\n"
                  << "Sera venenoso? " << (esVenenoso_ ? "Sí" : "No") << "\n";
    }
};

}  // namespace zoologico