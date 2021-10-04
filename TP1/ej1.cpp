// Nombre:
// TP N°: 1
// Ejercicio N°: 1
// Comentarios:

#include <iostream>
using namespace std;


int main(void){

    int horas, precio, sueldo;

    cout << "Ingrese la cantidad de horas trabajadas: " << endl;
    cin >> horas;
    cout << "Ingrese el precio por hora: " << endl;
    cin >> precio;

    sueldo = horas * precio;

    cout << "El sueldo es: " << sueldo << endl;

	return 0;

}
