// Nombre:
// TP N°: 1
// Ejercicio N°: 2
// Comentarios:
/* Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/
#include <iostream>
using namespace std;


int main(void){

    int A, B, C;

    cout << "Ingrese un numero A: ";
    cin >> A;
    cout << "Ingrese un numero B: ";
    cin >> B;

    C = A;
    A = B;
    B = C;

    cout << "El valor de A ahora es: " << A << endl;
    cout << "El valor de B ahora es: " << B << endl;

	return 0;

}
