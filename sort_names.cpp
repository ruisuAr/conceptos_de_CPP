// Este programa pide al usuario que ingrese 3 nombres, los ordena alfabéticamente y los imprime.
// Compilación: g++ -g sort_names.cpp -o sort_names
// Ejecución: ./sort_names

#include <iostream>	 // Para std::cout y std::cin
#include <vector>	 // Para std::vector
#include <string>	 // Para std::string
#include <algorithm> // Para std::sort

int main()
{
	std::vector<std::string> names;
	std::string name;

	// Pedir 3 nombres al usuario
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "Ingresa un nombre: ";
		std::cin >> name;
		names.push_back(name);
	}

	// Ordenar los nombres alfabéticamente
	std::sort(names.begin(), names.end());

	// Imprimir los nombres ordenados
	std::cout << "Nombres ordenados:\n";
	for (const std::string &n : names)
	{
		std::cout << n << std::endl;
	}

	return 0;
}