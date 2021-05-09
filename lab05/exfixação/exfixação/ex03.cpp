#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double mediaHarmonica(double, double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double num1, num2, resultado;
	cout << "Entre com um n�mero: ";
	cin >> num1;
	cout << "Entre com outro n�mero: ";
	cin >> num2;
	resultado = mediaHarmonica(num1, num2);
	cout << "A m�dia Harm�nica dos n�meros � " << resultado;
}

double mediaHarmonica(double x, double y)
{
	return (2 * x * y) / (x + y);
}