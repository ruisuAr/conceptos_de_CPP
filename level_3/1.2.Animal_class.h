#pragma once
#include <iostream>
#include <string>

namespace zoologico {

class Animal {
   private:
    // Atributos
    std::string especie_, alimentacion_;
    float peso_;

   protected:
    std::string sonido;

   public:
    // Constructor
    Animal(const std::string& name, float weight, const std::string& typeFood,
           const std::string& sound);
    // Destructor
    virtual ~Animal() {
        std::cout << "\nDestructor del objeto " << getEspecie() << '\n';
    }

    // Métodos
    void comer();
    // Método heredado y polimórfico
    virtual void hacerSonido() { std::cout << sonido << " generico\n"; }

    // Getters
    std::string getEspecie() const { return especie_; }
    virtual void mostrarInfo() const {
        std::cout << "Especie: " << especie_ << "\n"
                  << "Peso: " << peso_ << "kg\n"
                  << "Alimentación: " << alimentacion_ << "\n";
    }
};

}  // namespace zoologico
