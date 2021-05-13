#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

double calculoVetor(double[]);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double vet[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "valor " << i + 1 << ": " << endl;
		cin >> vet[i];
	}
	
	cout << calculoVetor(vet);
}

double calculoVetor(double vetor[])
{
	return (vetor[0] * (vetor[2] - vetor[1]));
}