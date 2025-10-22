// Estructura del lenguaje C++
// Asistente de venta de Sofia, version 4

#include <iostream>
using namespace std;

int main() {
    int talla, costo;
    char registrar, referencia[10], descripcion[30];

    cout << "Desea registrar un Zapato s/n: ";
    cin >> registrar;
    // Ciclo que permite registrar zapatos mientras el usuario ingrese
    // 's' o 'S'
    while (registrar == 's' || registrar == 'S') {
        cin.ignore();  // Limpiar el buffer de entrada
        cout << "Digite la referencia: ";
        cin.getline(referencia, 10);
        cout << "Digite una descripcion: ";
        cin.getline(descripcion, 30);
        cout << "Digite la talla: ";
        cin >> talla;
        cout << "Costo: $";
        cin >> costo;

        cout << "\nDesea registrar OTRO zapato s/n: ";
        cin >> registrar;
    }
    cout << "FIN DE LA APLICACIoN" << endl;

    cout << "LUIS MANUEL ARIZA PINEDA\n";

    return 0;
}