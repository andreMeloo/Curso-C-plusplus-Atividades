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

	bool resposta;
	char caractere;

	cout << "Digite um caractere a sua escolha: ";
	cin >> caractere;
	cout << "\n\nVocê gostaria de codificar ou decodificar o caractere? (digite 1 pra codificar; digite 0 pra decodificar): ";
	cin >> resposta;
	if (resposta)
	{
		cout << "Caractere codificado -> " << codificar(caractere);
	}
	else
	{
		cout << "Caractere decodificado -> " << decodificar(caractere);
	}

	
}

char codificar(char caractere)
{
	return caractere += 3;
}

char decodificar(char caractere)
{
	return caractere -= 3;
}