#include "1.2.Animal_class.h"

namespace zoologico {

class Ave : public zoologico::Animal {
   private:
    // Atributos específicos
    int longitudPico_;
    std::string colorPlumas_;
    bool puedeVolar_;

   public:
    // Constructor
    Ave(const std::string& n, float w, const std::string& tf,
        const std::string& s, float beakLength, const std::string& featherColor,
        bool canFly);

    // Métodos específicos
    void volar();
    // Método sobrescrito por polimorfismo
    void hacerSonido() override {
        std::cout << getEspecie() << " canta con " << sonido << '\n';
    }
    // Getters específicos
    void mostrarInfo() const override {
        Animal::mostrarInfo();
        std::cout << "Longitud del pico: " << longitudPico_ << "cm\n"
                  << "Color de las plumas: " << colorPlumas_ << "\n";
    }
};

}  // namespace zoologico