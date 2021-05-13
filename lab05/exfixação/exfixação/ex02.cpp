#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double convertF(double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	double celsius, fahrenheit;

	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> celsius;
	fahrenheit = convertF(celsius);
	cout << celsius << "° graus Celsius equivalem a " << fahrenheit << "° graus Fahrenheit.";

}

double convertF(double graus)
{
	return 1.8 * graus + 32;
}