// Conceptualization del lenguaje C++: Actividad 3 - Evidencia 2
// Desarrollado por Luis Ariza
// Programa que calcula el promedio de 4 notas y determina si el estudiante está aprobado o no.

#include <iostream>
using namespace std;

int main() {
	float nota1, nota2, nota3, nota4, promedio;

	cout<< "Ingresa la primera nota: ";
	cin>> nota1;
	cout<< "Ingresa la segunda nota: ";
	cin>> nota2;
	cout<< "Ingresa la tercera nota: ";
	cin>> nota3;
	cout<< "Ingresa la cuarta nota: ";
	cin>> nota4;

	promedio = (nota1+nota2+nota3+ nota4)/4;

	if(promedio >= 3 && promedio <= 5) {
		if(promedio == 3 || promedio < 3.5) {
			cout<< "En este momento no tiene aprobada la materia de tecnologia, pero tiene la oportunidad de recuperar." <<endl;
		} else {
			cout<< promedio << " Aprobado" <<endl;
		}
    } else if(promedio >= 0 && promedio < 3) {
		cout<< promedio << " No aprobado" <<endl;
	} else {
		cout<< "Las notas deben estar entre 0 y 5" <<endl;
	}

	return 0;
}
