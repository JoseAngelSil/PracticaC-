// Calcular el iva de un producto
#include<iostream>
using namespace std;

int main()
{
	float costo, neto, total;

	cout << "Ingrese el costo del producto sin el iva: ";
	cin >> costo;

	neto = costo * 0.16;
	total = costo + neto;
	cout << "\nIva: " << neto << endl;
	cout << "El costo total del producto es de: " << total << endl;
	return 0;
}