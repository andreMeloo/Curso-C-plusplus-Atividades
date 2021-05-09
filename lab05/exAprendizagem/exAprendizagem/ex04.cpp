#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double modulo(double, double);

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
	cout << "O tamanho do vetor é " << modulo(x, y);

}

double modulo(double c1, double c2)
{
	return sqrt(pow(c1, 2) + pow(c2, 2));
}