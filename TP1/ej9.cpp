// Nombre:
// TP N°:
// Ejercicio N°:
// Comentarios:
/*
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.
Ejemplo 1: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6 horas y 20 minutos.
Ejemplo 2: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12 horas y 0 minutos.
Ejemplo 3: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas y 50 minutos.
*/

#include <iostream>
using namespace std;


int main(void){

    int horas, minutos;

    cout << "Ingresar una cantidad de minutos: ";
    cin >> minutos;
    cout << endl;

    horas = minutos/ 60;

    minutos = minutos - horas * 60;

    cout << "La cantidad de minutos ingresada equivale a: " << horas << " horas y " << minutos << " minutos." << endl;

	return 0;

}
