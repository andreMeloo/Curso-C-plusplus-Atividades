#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>
#include "ex03.h"

using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	palavra dicion�rio[10]
	{
		{"M�o", "hand", "mano"},
		{"Estudo", "study", "estudio"}
	};

	cout << "Digite uma palvra em portugues pra adicionar ao seu dicion�rio: ";
	cin >> dicion�rio[2].portugues;
	cout << "Agora digite essa mesma palavra traduzida para o ingl�s: ";
	cin >> dicion�rio[2].ingles;
	cout << "Agora digite essa mesma palavra traduzida para o espanhol: ";
	cin >> dicion�rio[2].espanhol;
	cout << "\n\nAgora vejamos como est� o seu dicion�rio! -> " << endl;
	exibirDicionario(dicion�rio[0]);
	exibirDicionario(dicion�rio[1]);
	exibirDicionario(dicion�rio[2]);

	
}