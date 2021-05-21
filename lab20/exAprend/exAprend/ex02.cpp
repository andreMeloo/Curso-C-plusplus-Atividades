#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int veloc[10] = { 0 }, numCarros = 0, valor = 0;

	cout << "As ultimas 10 velocidades registradas: " << endl;
	for (int i = 0; i < 10; i++)
		cin >> veloc[i];
	
	for (int i = 0; i < 10; i++)
	{
		if (veloc[i] > 80)
		{
			numCarros++;
			valor += (veloc[i] - 80) * 8;
			cout << veloc[i] << " km/h excede o limite = multa de R$" << (veloc[i] - 80) * 8 << endl;
		}
	}
	
	cout << numCarros << " carros foram multados em um valor total de R$" << valor;
	

}
