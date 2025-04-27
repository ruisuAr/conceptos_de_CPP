#include <iostream>  // Para std::cout, std::endl y std::cin
using namespace std;

int main() {
  float number;

  cout << "Ingrese un número: ";
  cin >> number;

  if (number == 0)
    cout << "El '0' es un número neutro" << endl;
  else if (number > 0)
    cout << number << " es un numero positivo" << endl;
  else
    cout << number << " es un numero negativo" << endl;
}
