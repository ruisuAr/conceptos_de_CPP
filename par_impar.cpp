#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Ingrese un número: ";
  cin >> number;

  if (number % 2 == 0)
    cout << number << " es par" << endl;
  else
    cout << number << " es impar" << endl;
}