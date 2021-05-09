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

	palavra dicionário[10]
	{
		{"Mão", "hand", "mano"},
		{"Estudo", "study", "estudio"}
	};

	cout << "Digite uma palvra em portugues pra adicionar ao seu dicionário: ";
	cin >> dicionário[2].portugues;
	cout << "Agora digite essa mesma palavra traduzida para o inglês: ";
	cin >> dicionário[2].ingles;
	cout << "Agora digite essa mesma palavra traduzida para o espanhol: ";
	cin >> dicionário[2].espanhol;
	cout << "\n\nAgora vejamos como está o seu dicionário! -> " << endl;
	exibirDicionario(dicionário[0]);
	exibirDicionario(dicionário[1]);
	exibirDicionario(dicionário[2]);

	
}