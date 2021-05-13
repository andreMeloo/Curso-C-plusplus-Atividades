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

	float deposito = 0;
	ContaBancaria conta1;
	cout << "Por gentileza, digite um número inteiro identificador para sua conta: ";
	cin >> conta1.identificador;
	cin.get();
	cout << "Por Gentileza, nos informe seu nome completo: ";
	cin.getline(conta1.nomeCliente, 100);
	cin.get();
	exibirContaBancaria(conta1, deposito);


}