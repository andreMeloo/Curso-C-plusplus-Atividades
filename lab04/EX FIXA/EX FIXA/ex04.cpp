#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double volumeC(double, double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double volumeCilindro, h, raio;

	cout << "Calculo de Volume de um Cilindro\n";
	cout << "--------------------------------\n";
	cout << "Entre com raio da base: ";
	cin >> raio;
	cout << endl;
	cout << "Entre com a altura: ";
	cin >> h;
	cout << endl;
	volumeCilindro = volumeC(h, raio);
	cout << "O volume do cilindro é " << volumeCilindro << endl;
	
}

double volumeC(double h, double raio)
{
	double volume, pi = 3.14159;

	volume = (pi * h * pow(raio, 2));
	return volume;
}