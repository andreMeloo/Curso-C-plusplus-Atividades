#define _CTR_NO_SECURE_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int vet1[5], vet2[5], soma_Vet[5];
	cout << "Digite 10 valores: ";
	for (int i = 0; i< 5; i++)
	{
		cin >> vet1[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> vet2[i];
	}
	cout << "Vetor A: ";
	for (int i : vet1)
		cout << i << ' ';
	cout << endl;
	cout << "Vetor B: ";
	for (int i : vet2)
		cout << i << ' ';
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		soma_Vet[i] = vet1[i] + vet2[i];
	}
	cout << "Vetor S: ";
	for (int i : soma_Vet)
		cout << i << ' ';

}