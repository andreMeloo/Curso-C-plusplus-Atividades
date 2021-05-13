#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

double retornaGraus(double, double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, y;
	cout << "Digite as coordenadas do vetor:\n";
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << endl;
	cout << "O ângulo do vetor é " << retornaGraus(x, y) << "° graus";
}

double retornaGraus(double a, double b)
{
	return (atan2(b, a) * 180) / M_PI;
}