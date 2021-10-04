// Nombre:
// TP N°: 1
// Ejercicio N°: 13
// Comentarios:
/* Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir
el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrará por pantalla que se deberán entregar
 2 billetes de $ 1.000, 1 billete de $ 500 y 0 billetes de $ 200 y $ 100.
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrará por pantalla que se deberán entregar
3 billetes de $ 1.000, 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrará por pantalla que se deberán entregar
1 billete de $ 200, 1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo
de $ 100 ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.
*/

#include <iostream>
using namespace std;


int main(void){

    int importe, mil, quinientos, doscientos, cien;

    cout << "Ingresar el importe a retirar: ";
    cin >> importe;
    cout << endl;

    mil = importe / 1000;
    importe = importe - mil * 1000;
    quinientos = importe / 500;
    importe = importe - quinientos * 500;
    doscientos = importe / 200;
    importe = importe - doscientos * 200;
    cien = importe / 100;
    importe = importe - cien * 100;

    cout << "Se deben entregar: " << mil << " billetes de $1000, " << quinientos << " billetes de $500, " << doscientos << " de $200 y " << cien << " de $100." << endl;
	return 0;

}
