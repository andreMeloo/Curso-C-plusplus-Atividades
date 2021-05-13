#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

char charada(char, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << charada(60, 20);
	cout << charada(7, 90);
	cout << charada(40, 72);
	cout << charada(53, 48);
	cout << charada(1, 107);

}

char charada(char caractere, int posicao_a_frente)
{
	char caractere_final;
	return caractere_final = caractere + posicao_a_frente;
}