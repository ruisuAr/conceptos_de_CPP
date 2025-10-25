// Uso de clases sobrecarga de métodos y constructores en C++

#include "2.2.Ops_Maths_class.h"
using namespace std;

int main() {
    cout << "---------- int ----------" << endl;
    Ops_Maths<int> op1(5, 2, 4);
    op1.suma();
    op1.resta();
    op1.multiplicacion();
    op1.division();
    op1.potencia();
    // Llamada a la sobrecarga de métodos
    cout << "---- Sobrecarga ----" << endl;
    op1.suma(10, 20, 30);
    op1.resta(50, 20, 10);
    op1.multiplicacion(2, 3, 4);

    cout << "\n-------- double --------" << endl;
    Ops_Maths<double> op2(2.5, 4.0, 1.5);
    op2.suma();
    op2.resta();
    op2.multiplicacion();
    op2.division();
    op2.potencia();
    // Llamada a la sobrecarga de métodos
    cout << "---- Sobrecarga ----" << endl;
    op2.suma(1.1, 2.2, 3.3);
    op2.resta(5.5, 2.2, 1.1);
    op2.multiplicacion(1.5, 2.0, 2.5);

    cout << "\n--------- char ---------" << endl;
    Ops_Maths<char> op3('6', '3', '2');
    op3.suma();
    op3.resta();
    op3.multiplicacion();
    op3.division();
    op3.potencia();
    // Llamada a la sobrecarga de métodos
    cout << "---- Sobrecarga ----" << endl;
    op3.suma('1', '2', '3');
    op3.resta('5', '2', '1');
    op3.multiplicacion('2', '3', '4');

    return 0;
}