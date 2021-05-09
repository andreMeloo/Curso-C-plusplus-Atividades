#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double imc(double, double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double altura, massa, IMC;
	cout << "Índice de Massa Corporal (IMC)\n";
	cout << "------------------------\n";
	cout << "Altura: ";
	cin >> altura;
	cout << "Massa: ";
	cin >> massa; 
	IMC = imc(altura, massa);
	cout << "IMC: " << IMC;
	
}

double imc(double h, double m)
{
	return m / pow(h, 2);
}