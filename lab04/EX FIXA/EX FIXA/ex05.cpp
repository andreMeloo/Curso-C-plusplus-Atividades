#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int Absoluto(int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int seuValor, resultado;

	cout << "Digite um numero inteiro (negativo ou positivo): ";
	cin >> seuValor;
	cout << endl;
	resultado = Absoluto(seuValor);
	cout << "O valor absoluto do numero digitado é " << resultado;

	
}


int Absoluto(int x)
{
	int valor;
	valor = sqrt(pow(x, 2));
	return valor;
}