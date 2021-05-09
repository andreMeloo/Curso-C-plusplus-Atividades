#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

struct chocolate
{
	char marca[20];
	float peso_barra;
	int calorias;
};


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	chocolate lanche
	{
		 "Charge", 2.5, 350
	};

	cout << "Marca: " << lanche.marca << endl;
	cout << "Peso: " << lanche.peso_barra << endl;
	cout << "Calorias: " << lanche.calorias << endl;

}