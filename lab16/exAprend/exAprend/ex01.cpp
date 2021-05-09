#define CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

	char jogadorTime[20], *nomeTime[10];
	int numLetrasJog = 0;

	cout << "Digite jogador/time: ";
	cin.getline(jogadorTime, 20);

	for (int i = 0; i < 20; i++)
	{
		if (jogadorTime[i] == '/')
		{
			nomeTime[0] = &jogadorTime[i + 1];
			break;
		}

		numLetrasJog += 1;
	}

	cout << "O nome do jogador tem " << numLetrasJog << " letras." << endl;
	cout << "Seu time é " << *nomeTime;

}