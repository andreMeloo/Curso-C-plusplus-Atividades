#define CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <Windows.h>
#include <cstring>
#include <cmath>

using namespace std;

struct Local 
{
	char Nome[50], Pais[20], Continente[30];
};

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int qnt_locais;
	cout << "Quantos locais você que visitar? ";
	cin >> qnt_locais;

	Local* ptr_visitas = new Local[qnt_locais];

	for (int i = 0; i < qnt_locais; i++)
	{
		cout << "Digite seu " << i + 1 << "° Local de visita(Nome, País, Continente):" << endl;
		cin.get();
		cin.getline(ptr_visitas[i].Nome, 50);
		cin.getline(ptr_visitas[i].Pais, 20);
		cin.getline(ptr_visitas[i].Continente, 30);
	}

	cout << "\n\n";
	cout << "Os locais que você vai visitar são: " << endl;

	for (int i = 0; i < qnt_locais; i++)
	{
		cout << ptr_visitas[i].Nome << ", Localizado no País -> " << ptr_visitas[i].Pais << ", que fica no continente -> " << ptr_visitas[i].Continente << endl;
	}

	delete[] ptr_visitas;

}