#include "Animal_class.h"

namespace ave {

class Ave : public zoologico::Animal {
   private:
    // Atributos específicos
    int longitudPico_;
    std::string colorPlumas_;
    bool puedeVolar_;

   public:
    // Constructor
    Ave(std::string n, float w, std::string tf, std::string s, float beakLength,
        std::string featherColor, bool canFly);

    // Métodos específicos
    void volar();
    void hacerSonido() override { std::cout << sonido << std::endl; };

    void showLongitudPico() { std::cout << longitudPico_ << std::endl; }
    void showColorPlumas() { std::cout << colorPlumas_ << std::endl; }
};

}