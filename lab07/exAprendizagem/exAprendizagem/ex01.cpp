#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

char codificar(char);
char decodificar(char);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char caractere_escolhido;

	cout << "Digite um caractere a sua escolha: ";
	cin >> caractere_escolhido;
	cout << "Caractere codificado -> " << codificar(caractere_escolhido) << endl;
	cout << "Caractere decodificado -> " << decodificar(caractere_escolhido) << endl;

}

char codificar(char caractere)
{
	return caractere += 3;
}

char decodificar(char caractere)
{
	return caractere -= 3;
}