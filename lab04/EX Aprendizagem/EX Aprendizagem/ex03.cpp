#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double media(double, double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double resultado, x, y;

	cout << "Digite um valor inteiro: " << endl;
	cin >> x;
	cout << "Digite outro valor inteiro: " << endl;
	cin >> y;
	resultado = media(x, y);
	cout << "A média dos números é " << resultado << endl;

}

double media(double x, double y)
{
	double media;
	media = (x + y) / 2;

	return media;
}