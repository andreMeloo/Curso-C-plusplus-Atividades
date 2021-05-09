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
	cout << "Entre com um número: ";
	cin >> num1;
	cout << "Entre com outro número: ";
	cin >> num2;
	resultado = mediaHarmonica(num1, num2);
	cout << "A média Harmônica dos números é " << resultado;
}

double mediaHarmonica(double x, double y)
{
	return (2 * x * y) / (x + y);
}