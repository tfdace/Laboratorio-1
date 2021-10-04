// Nombre:
// TP N°:1
// Ejercicio N°: 5
// Comentarios:
/* Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
 y luego se informe el porcentaje de ventas para cada una de ellas.

Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.

*/
#include <iostream>
using namespace std;


int main(void){

    float A, B, C, porA, porB, porC, total;

    cout << "Ingrese la cantidad vendida de A: ";
    cin >> A;
    cout << "Ingrese la cantidad vendida de B: ";
    cin >> B;
    cout << "Ingrese la cantidad vendida de C: ";
    cin >> C;

    total = A + B + C;

    porA = A * 100 / total;
    porB = B * 100 / total;
    porC = C * 100 / total;

    cout << "El porcentaje de A es: " << porA << endl;
    cout << "El porcentaje de B es: " << porB << endl;
    cout << "El porcentaje de C es: " << porC << endl;

	return 0;

}
