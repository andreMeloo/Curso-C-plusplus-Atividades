#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int vet[5];

	for (int i = 0; i < 5000; i++)
	{
		vet[i] = 60;
		cout << "posicao " << i << ": " << vet[i] << endl;
	}

}

// a posi��o nem sempre � a mesma, a impress�o que d� � que o programa para quando o valor � alocado em algum lugar da memoria muito diferente da alocada para o vetor;