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

	double soma1 = 0, soma2 = 0;

	for (int i = 1; i <= 100; i++)
	{
		soma1 += pow(i, 2);
	}
	for (int i = 1; i <= 100; i++)
	{
		soma2 += i;
	}
	cout << "A soma dos quadrados dos 100 primeiros números naturais é: " << soma1 << endl;
	cout << "O quadrado da soma dos 100 primeiros números naturais é: " << pow(soma2, 2) << endl;
	cout << "A diferença entre a soma dos quadrados dos 100 primeiros números naturais e oquadrado da soma é: " << pow(soma2, 2) - soma1;
}