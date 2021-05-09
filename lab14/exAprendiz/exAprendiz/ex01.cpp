#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

struct tigela
{
	char estado[10];
	char alimento[10];
};

void fome(tigela*);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	tigela vazilha = { "cheia", "sopa" };
	tigela * ptrVazilha = &vazilha;
	cout << "Hora da janta, sua vazilha está " << ptrVazilha->estado << " de " << ptrVazilha->alimento << endl;
	fome(&vazilha);
	cout << "Após a janta sua vazilha agora está " << ptrVazilha->estado << " ela estava cheia de " << ptrVazilha->alimento << " mas você comeu tudo!" << endl;

}

void fome(tigela* ptrTigela)
{
	strcpy(ptrTigela->estado, "vazia");
}