// Nombre:
// TP N°: 1
// Ejercicio N°: 6
// Comentarios:
/* Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatros semanas del mes.
 El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.

Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio $ 2000 y
como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

#include <iostream>
using namespace std;


int main(void){

    float S1, S2, S3, S4, total, promedioTotal, promS1, promS2, promS3, promS4;

    cout << "Ingrese la recaudación de la semana 1: ";
    cin >> S1;
    cout << "Ingrese la recaudación de la semana 2: ";
    cin >> S2;
    cout << "Ingrese la recaudación de la semana 3: ";
    cin >> S3;
    cout << "Ingrese la recaudación de la semana 4: ";
    cin >> S4;
    cout << endl;

    total = S1 + S2 + S3 + S4;
    promedioTotal = total / 4;

    promS1 = S1 * 100 / total;
    promS2 = S2 * 100 / total;
    promS3 = S3 * 100 / total;
    promS4 = S4 * 100 / total;

    cout << "La la recaudación promedio por semana es: " << promedioTotal << endl << endl;
    cout << "La la recaudación promedio de semana 1 es: " << promS1 << endl;
    cout << "La la recaudación promedio de semana 2 es: " << promS2 << endl;
    cout << "La la recaudación promedio de semana 3 es: " << promS3 << endl;
    cout << "La la recaudación promedio de semana 4 es: " << promS4 << endl;

	return 0;

}
