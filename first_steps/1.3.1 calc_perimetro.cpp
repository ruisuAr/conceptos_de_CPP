// Metodología de la programación: Actividad 3 - Evidencia 1
// Desarrollado por Luis Ariza
/*
Hacer un algoritmo que permita calcular el perímetro de una estructura y
mostrarla en decímetros, para ello vamos a pedir tres datos en
diferentes escalas, uno en hectómetros, otro en decámetros y uno en
metros. El algoritmo deberá hallar a cuanto equivale el valor ingresado
en hectómetros a decímetros, de decámetros a decímetros y de metros a
decímetros, y sumar cada uno de los equivalentes porque el algoritmo
pide mostrar el resultado en decímetros
*/

#include <iostream>
using namespace std;

main() {
    float hecto, deca, metro, dm_hm, dm_Dm, dm_m, perimeter_dm;

    cout << "Ingresa la cantidad en hectometros: ";
    cin >> hecto;
    cout << "Ingresa la cantidad en decametros: ";
    cin >> deca;
    cout << "Ingresa la cantidad en metros: ";
    cin >> metro;

    dm_hm = hecto * 1000;  // Convertir hectómetros a decímetros
    dm_Dm = deca * 100;    // Convertir decámetros a decímetros
    dm_m = metro * 10;     // Convertir metros a decímetros
    perimeter_dm = dm_hm + dm_Dm + dm_m;  // Sumar todos los decímetros

    cout << "El perímetro total en decímetros es: " << perimeter_dm
         << endl;

    return 0;
}