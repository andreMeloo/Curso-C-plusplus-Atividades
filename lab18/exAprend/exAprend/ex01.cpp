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

	int i = 0;
	while (++i < 4)
		cout << "Oi! "; /* no primeiro while vai ser repetido 3 oi, j� que a incrementa��o pela esquerda
						incrementa primeiro e depois compara */
	do
		cout << "Tchau! "; /* j� nesse la�o o i come�ar� igual a 4 e a incrementa��o pela direita ser� feita ap�s o teste */
	while (i++ <= 8);

}