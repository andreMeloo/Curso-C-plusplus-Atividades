#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int vet[5] = {59, 12, 4, 36, 8}, posicao, valor;

	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;
	cout << "-------------------------" << endl;
	cout << "Alterar posicao: ";
	cin >> posicao;
	cout << "Novo valor: ";
	cin >> valor;
	vet[posicao] = valor;
	cout << "-------------------------" << endl;
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;

}