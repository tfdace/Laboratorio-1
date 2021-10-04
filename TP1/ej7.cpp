// Nombre:
// TP N°: 1
// Ejercicio N°: 7
// Comentarios:
/* Hacer un programa para ingresar por teclado el importe de una venta
y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800.
*/

#include <iostream>
using namespace std;


int main(void){

    float venta, porcentaje, total, dif;

    cout << "Ingrese el importe de la venta: ";
    cin >> venta;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> porcentaje;
    cout << endl;

    dif = (100 - porcentaje)/100;
    total = venta * dif;

    cout << "El importe a pagar es: " << total << endl;

	return 0;

}
