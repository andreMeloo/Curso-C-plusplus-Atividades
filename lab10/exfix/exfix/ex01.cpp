#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	string nome_frutas[3] = { "Alface", "Beterraba", "Cenoura" };
	float valor_frutas[3] = { 1.5, 2.0, 1.0 }, total, quantidades[3];
	int ;
	cout << "Prezado Cliente,\nDigite a quantidade de quilos desejados: " << endl;
	cout << nome_frutas[0] << ": ";
	cin >> quantidades[0];
	cout << nome_frutas[1] << ": ";
	cin >> quantidades[1];
	cout << nome_frutas[2] << ": ";
	cin >> quantidades[2];

	total = (valor_frutas[0] * quantidades[0]) + (valor_frutas[1] * quantidades[1]) + (valor_frutas[2] * quantidades[2]);

	cout << "Resumo da Compra" << endl;
	cout << "----------------" << endl;
	cout << nome_frutas[0] << "   = R$" << valor_frutas[0] * quantidades[0] << endl;
	cout << nome_frutas[1] << "   = R$" << valor_frutas[1] * quantidades[1] << endl;
	cout << nome_frutas[0] << "   = R$" << valor_frutas[2] * quantidades[2] << endl;
	cout << "----------------" << endl;
	cout << "Total     = R$" << total;

}
