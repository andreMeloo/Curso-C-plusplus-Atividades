#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int valor1 = 0, valor2 = 0, soma = 0;

	cout << "Digite um número inteiro: ";
	cin >> valor1;
	cout << "Digite outro número inteiro: ";
	cin >> valor2;

	if (valor1 < valor2)
	{
		for (int i = valor1 + 1; i < valor2; i++)
			soma += i;
	}
	else
	{
		for (int i = valor1 - 1; i > valor2; i--)
			soma += i;
	
	}

	cout << "A soma de todos os valores entre " << valor1 << " e " << valor2 << ": " << soma;
	

}