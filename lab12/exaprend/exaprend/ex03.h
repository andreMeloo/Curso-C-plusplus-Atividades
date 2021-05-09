#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

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


void exibirDicionario(palavra);
void exibirContaBancaria(ContaBancaria, float);