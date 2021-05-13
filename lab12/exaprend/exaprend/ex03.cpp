#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

struct palavra
{
	char portugues[20];
	char ingles[20];
	char espanhol[20];
};

struct ContaBancaria
{
	int identificador;
	char nomeCliente[100];
	float saldo = 0;
};

void exibirDicionario(palavra x)
{
	cout << x.portugues << " -> " << x.ingles << " -> " << x.espanhol << endl;
}

void exibirContaBancaria(ContaBancaria x, float deposito)
{
	cout << "Olá " << x.nomeCliente << " , seu saldo atual é R$" << x.saldo << endl;
	cout << "Digite o valor que você quer depositar na conta: ";
	cin >> deposito;
	x.saldo += deposito;
	cout << "Obrigado por confiar no nosso trabalho, agora seu novo saldo é R$" << x.saldo;
}