#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

enum formato
{
	JPG, PNG, BMP
};

struct imagem
{
	char nome[20];
	float altura, largura;
	formato tipo;
};

void detalhes(imagem*);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	imagem retrato;
	detalhes(&retrato);
	
}

void detalhes(imagem* ptrRetrato)
{
	strcpy(ptrRetrato->nome, "backg.png");
	ptrRetrato->altura = 1920;
	ptrRetrato->largura = 1080;
	ptrRetrato->tipo = PNG;
	if (ptrRetrato->tipo == 1)
	{
		cout << "A imagem \"" << ptrRetrato->nome << "\" com tamanho " << ptrRetrato->altura << "x" << ptrRetrato->largura << " tem formato PNG.";
	}
	
}
