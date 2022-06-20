/*
crear un triangulo isoceles de 5 lineas
*/

#include<iostream>
using namespace std;

int main()
{
	//creacicon de variables y constantes locales
	const int no_lineas = 5;
	const char spc_blanco = ' ';
	const char  aste = '*';

	cout << endl;

	for (int fila = 1; fila <= no_lineas; fila++)
	{
		for (int blancos = no_lineas - fila; blancos > 0; blancos--)
		{
			cout << spc_blanco;
		}
		for (int c_ast = 1; c_ast < 2 * fila; c_ast++)
		{
			cout << aste;
		}
		cout << endl;
	}
	for (int tronco = 1; tronco <= 3; tronco++)
	{
		for (int espacio = 1; espacio <= 3; espacio++)
			cout << spc_blanco;
		for (int madera = 1; madera <= 3; madera++)
			cout << aste;
		cout << endl;	
	}
	return 0;
}