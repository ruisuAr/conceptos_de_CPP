#include "Animal_class.h"

namespace mamifero {

class Mamifero : public zoologico::Animal {
   private:
    // Atributos específicos
    std::string colorPelo_, tipoPelaje_;

   public:
    // Constructor
    Mamifero(std::string n, float w, std::string tf, std::string s,
             std::string furColor, std::string furType);

    // Métodos específicos
    void amamantar();
    void showColorPelo() { std::cout << colorPelo_ << std::endl; }
    void showTipoPelaje() { std::cout << tipoPelaje_ << std::endl; }
};

}  // namespace mamifero