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

	cout << "Sal�rio atual: ";
	cin >> salario;
	cout << "Sal�rio ajusatado para R$" << aumentaSalario(salario);
}

double aumentaSalario(double valor)
{
	return valor + (valor * 0.15);
}