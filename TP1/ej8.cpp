// Nombre:
// TP N°:
// Ejercicio N°:
// Comentarios:

/* Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y
el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el
porcentaje de descuento aplicada a la misma.
Ejemplo 1. Si el importe de la venta sin descuento es $ 1.500 y el importe de la venta con
 descuento es $ 1.200 entonces el porcentaje de descuento aplicado fue el 20%.
Importante: Le sugerimos que haga una prueba con este ejemplo, ya que muchos lo resuelven y
 concluyen que el descuento es el 80%. Eso NO es el descuento. Si el descuento fuera de 80%
 entonces una venta de $ 1.500 se cobraría tan solo $ 300.
Ejemplo 2. Si el importe de la venta sin descuento es $ 500 y el importe de la venta con descuento
 es $ 500 entonces el porcentaje de descuento aplicado fue el 0%
*/

#include <iostream>
using namespace std;


int main(void){

    float venta, ventaConDescuento, descuento;

    cout << "Ingrese el importe de la venta: ";
    cin >> venta;
    cout << "Ingrese el importe de la venta con descuento: ";
    cin >> ventaConDescuento;
    cout << endl;

    descuento = 100 - (ventaConDescuento * 100 / venta);

    cout << "El descuento aplicado fue: " << descuento << "%"<< endl;

	return 0;

}
