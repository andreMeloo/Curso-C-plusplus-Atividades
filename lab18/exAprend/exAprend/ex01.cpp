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
		cout << "Oi! "; /* no primeiro while vai ser repetido 3 oi, já que a incrementação pela esquerda
						incrementa primeiro e depois compara */
	do
		cout << "Tchau! "; /* já nesse laço o i começará igual a 4 e a incrementação pela direita será feita após o teste */
	while (i++ <= 8);

}