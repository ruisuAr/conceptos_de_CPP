// Uso de clases sobrecarga de métodos y constructores en C++

#include "2.2.Ops_Maths_class.h"
using namespace std;

int main() {
    Ops_Maths<int> enteros(5, 2, 1);
    Ops_Maths<char> caracteres('6', '3', '2');
    Ops_Maths<double> flotantes(5.5, 2.5, 1.0);

    std::cout << "------- Enteros -------\n";
    enteros.mostrar();

    std::cout << "\n---- Caracteres ----\n";
    caracteres.mostrar();

    std::cout << "\n------ Flotantes ------\n";
    flotantes.mostrar();

    // Constructor por defecto
    Ops_Maths<int> op;

    std::cout << "\n----- Sobrecargas -----\n";
    std::cout << "Suma (5,7): " << op.suma(5, 7) << "\n";
    std::cout << "Suma (5,7,2): " << op.suma(5, 7, 2) << "\n";
    std::cout << "Resta (10,3): " << op.resta(10, 3) << "\n";
    std::cout << "Resta (10,3,2): " << op.resta(10, 3, 2) << "\n";
    std::cout << "Multiplicación (2,3): " << op.multiplicacion(2, 3) << "\n";
    std::cout << "Multiplicación (2,3,4): " << op.multiplicacion(2, 3, 4)
              << "\n";
    std::cout << "División (6,3): " << op.division(6, 3) << "\n";
    std::cout << "División (8,0): " << op.division(8, 0) << "\n";
    std::cout << "Potencia (2,5): " << op.potencia(2, 5) << std::endl;

    return 0;
}