#pragma once
#include <string>

namespace zoologico {

class Animal {
   private:
    // Atributos
    std::string raza_, tipoALimentacion_;
    float peso_;

   protected:
    // Atributos accesibles para clases derivadas
    std::string sonido;

   public:
    // Constructor
    Animal(std::string name, float weight, std::string typeFood,
           std::string sound);
    // Destructor
    ~Animal() {
        std::cout << "\nDestructor del que hace " << sonido << std::endl;
    };

    // Métodos
    void comer();
    void showRaza() { std::cout << raza_ << std::endl; }
    void showPeso() { std::cout << peso_ << std::endl; }
    void showAlimentacion() { std::cout << tipoALimentacion_ << std::endl; }
    // Método heredado y polimórfico
    virtual void hacerSonido() { std::cout << sonido << std::endl; };

    // Getters
    std::string getRaza() const { return raza_; }
};

}  // namespace zoologico
