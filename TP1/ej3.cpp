// Nombre:
// TP N°: 1
// Ejercicio N°: 3
// Comentarios:
/* Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.
 Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
 informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.
*/

#include <iostream>
using namespace std;


int main(void){

    int autos, sueldoTotal;
    int const SUELDOFIJO = 15000;

    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> autos;

    sueldoTotal = autos * 2000 + SUELDOFIJO;

    cout << "El sueldo total es de: " << sueldoTotal << endl;

	return 0;

}
