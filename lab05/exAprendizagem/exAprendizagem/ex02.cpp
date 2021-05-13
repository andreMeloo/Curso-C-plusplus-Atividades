#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double aumentaSalario(double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double salario;

	cout << "Salário atual: ";
	cin >> salario;
	cout << "Salário ajusatado para R$" << aumentaSalario(salario);
}

double aumentaSalario(double valor)
{
	return valor + (valor * 0.15);
}