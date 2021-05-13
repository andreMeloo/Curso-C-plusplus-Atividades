#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

void equacaoQuadratica(float, float, float);
float Delta(float, float, float);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float a, b, c;
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;
	equacaoQuadratica(a, b, c);
}

void equacaoQuadratica(float a, float b, float c)
{

	float raiz1, raiz2, delta = Delta(a, b, c);
	if (delta > 0)
	{
		raiz1 = (-b + sqrt(delta)) / (2 * a);
		raiz2 = (-b - sqrt(delta)) / (2 * a);
		cout << "As raizes de F(x) = " << a << "x² + " << b << "x + " << c << " são\nx1 = " << raiz1 << "\nx2 = " << raiz2;
	}
	else if (delta == 0)
	{
		raiz1 = (-b + sqrt(delta)) / (2 * a);
		raiz2 = raiz1;
		cout << "As raizes de F(x) = " << a << "x² + " << b << "x + " << c << " são iguais\nx1 = " << raiz1 << "\nx2 = " << raiz2 << endl;
	}
	else
	{
		cout << "F(x) = " << a << "x² + " << b << "x + " << c << " não possui raizes reais!";
	}
}

float Delta(float a, float b, float c)
{
	float valor_delta;

	valor_delta = pow(b, 2) - (4 * a * c);
	return valor_delta;
}