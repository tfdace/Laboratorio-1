// Nombre:
// TP N°:
// Ejercicio N°:
// Comentarios:
/* Hacer un programa para ingresar por teclado una cantidad de minutos
y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.
*/

#include <iostream>
using namespace std;


int main(void){

    int minutos, horas, dias;

    cout << "Ingrese una cantidad de minutos: ";
    cin >> minutos;
    cout << endl;

    horas = minutos / 60;
    minutos = minutos - horas * 60;
    dias = horas / 24;
    horas = horas - dias * 24;

    cout << "La cantidad de minutos ingresados equivalen a: " << dias << " dias, " << horas << " horas y " << minutos << " minutos." << endl;

	return 0;

}
