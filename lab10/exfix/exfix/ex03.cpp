#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int somaValoresVetor(int, int , int , int , int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int vetor[5];

	cout << "Digite 5 valores: ";
	cin >> vetor[0];
	cin >> vetor[1];
	cin >> vetor[2];
	cin >> vetor[3];
	cin >> vetor[4];
	cout << "A soma do vetor é: " << somaValoresVetor(vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
}

int somaValoresVetor(int vetor1, int vetor2, int vetor3, int vetor4, int vetor5)
{
	int soma;

	soma = vetor1 + vetor2 + vetor3 + vetor4 + vetor5;
	return soma;
}