/*
Creacion de programa estandar con datos de 
edad, sexo, altura en metro y que el programa imprima estos datos
*/

#include<iostream>
using namespace std;

int main() {
	int edad;
	char sexo;
	float altura;
	cout << "Ingrese su edad: "; cin >> edad;

	cout << endl << "Ingrese su genero, (M) o (F): "; cin >> sexo;

	cout << endl << "ingrese su estaltura en metros: "; cin >> altura;

	cout << "\nSu edad es " << edad << "\nSexo: " << sexo << "\nAltura: " << altura << endl;
	return 0;
}