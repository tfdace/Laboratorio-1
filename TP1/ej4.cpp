// Nombre:
// TP N°: 1
// Ejercicio N°: 4
// Comentarios:
/* Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión y la cantidad de pasajes ocupados
 y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes,
el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
*/

#include <iostream>
using namespace std;


int main(void){

    float asientosOcupados, totalAsientos , porcentajeDisponible, porcentajeOcupado;

    cout << "Ingrese la cantidad de asientos disponibles: ";
    cin >> totalAsientos;
    cout << "Ingrese la cantidad de asientos ocupados: ";
    cin >> asientosOcupados;

    porcentajeOcupado = (asientosOcupados * 100)/ (totalAsientos);
    porcentajeDisponible = 100 - porcentajeOcupado;

    cout << "El porcentaje de asientos disponibles es de: " << porcentajeDisponible << endl;
    cout << "El porcentaje de asientos ocupados es de: " << porcentajeOcupado << endl;

    return 0;


}
