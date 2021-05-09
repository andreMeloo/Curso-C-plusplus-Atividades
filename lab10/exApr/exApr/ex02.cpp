#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float notas[3], pesos[3] = { 2, 3, 4 }, mediaAtual, mediaAntiga;

	
	for (int i = 0; i < 3; i++)
	{
		cout << "Digite sua " << i + 1 << "° nota: ";
		cin >> notas[i];
	}

	mediaAntiga = ((notas[0] * pesos[0]) + (notas[1] * pesos[1]) + (notas[2] * pesos[2])) / 9;
	mediaAtual = (notas[0] + notas[1] + notas[2]) / 3;
	cout << "Sua media no calculo antigo é: " << mediaAntiga << endl;
	cout << "Sua media no calculo atual é: " << mediaAtual;

}