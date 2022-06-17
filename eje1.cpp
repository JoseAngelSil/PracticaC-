/**
Escribe un programa que lea de la entrada estandard dos numeros y muestre en la salida estandard
su suma, resta, multiplicacion y división
*/

#include<iostream>
using namespace std;

int main()
{
	float no1, no2, suma, resta, mult, div;
	cout << "Ingrese un numero: ";
	cin >> no1;
	cout << "\nIngrese un segundo numero: ";
	cin >> no2;

	// Se realiza las operaciones
	suma = no1 + no2;
	resta = no1 - no2;
	mult = no1 * no2;
	div = no1 / no2;

	// Se imprimen los resultados
	cout << "\n" << suma << endl;
	cout << resta << endl;
	cout << mult << endl;
	cout << div << endl;
	return 0;
}