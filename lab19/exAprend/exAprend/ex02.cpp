#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

const int num_meses = 12;
const int anos = 3;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	const char* meses[num_meses] = { "Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubto","Novembro", "Dezembro" };
	int matriz_vendas[anos][num_meses] = { {0} }, soma[anos] = { 0 }, soma_total = 0;

	for (int i = 0; i < anos; i++)
	{
		cout << "Digite o numero de livros vendidos no " << i + 1 << "° ano:" << endl;
		for (int j = 0; j < num_meses; j++)
		{
			cout << meses[j] << ": ";
			cin >> matriz_vendas[i][j];
			soma[i] += matriz_vendas[i][j];
		}
	}
		

	for (int i = 0; i < anos; i++)
		for (int j = 0; j < num_meses; j++)
			soma_total += matriz_vendas[i][j];

	cout << "- Total de vendas -" << endl;
	for (int i = 0; i < anos; i++)
		cout << i + 1 << "° ano: " << soma[i] << endl;

	cout << "Nos tres anos foram vendidos " << soma_total << " livros.";

}