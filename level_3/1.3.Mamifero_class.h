#include "1.2.Animal_class.h"

namespace zoologico {

class Mamifero : public zoologico::Animal {
   private:
    // Atributos específicos
    std::string colorPelo_, tipoPelaje_;

   public:
    // Constructor
    Mamifero(const std::string& n, float w, const std::string& tf,
             const std::string& s, const std::string& furColor,
             const std::string& furType);

    // Métodos específicos
    void amamantar();
    // Método sobrescrito por polimorfismo
    void hacerSonido() override {
        std::cout << getEspecie() << " ha hecho un " << sonido << '\n';
    }
    // Getters específicos
    void mostrarInfo() const override {
        Animal::mostrarInfo();
        std::cout << "Color del pelo: " << colorPelo_ << "\n"
                  << "Tipo de pelaje: " << tipoPelaje_ << "\n";
    }
};

}  // namespace zoologico