#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float percntDist = 0.28, impostos = 0.45, custo, valorFinal;

	cout << "Digite o valor do custo de f�brica do veiculo: " << endl;
	cin >> custo;
	valorFinal = custo + (custo * percntDist) + (custo * impostos);
	cout << "O valor final do carro pro consumidor �: " << valorFinal << endl;
}