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

void exibir(chocolate);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	chocolate fabrica[3]
	{
		{"Garoto", 1.5, 600},
		{"Nestle", 2.7, 200},
		{"Kinder Joy", 0.9, 350}
	};

	exibir(fabrica[0]);
	exibir(fabrica[1]);
	exibir(fabrica[2]);


}

void exibir(chocolate x)
{
	cout << "Marca: " << x.marca << endl;
	cout << "Peso: " << x.peso_barra << endl;
	cout << "Calorias: " << x.calorias << endl;
	cout << "\n";
}