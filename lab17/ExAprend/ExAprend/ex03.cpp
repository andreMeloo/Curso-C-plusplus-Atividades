#define _CTR_NO_SECURE_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num1, num2, soma = 0;
	cout << "Digite o intervalor 1 e 2: ";
	cin >> num1 >> num2;
	for (int i = num1; i <= num2; i++)
	{
		soma += i;
	}
	
	cout << "Valor da soma entre os intervalos: " << soma;
}