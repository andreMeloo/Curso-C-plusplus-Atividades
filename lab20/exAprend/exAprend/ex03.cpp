#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char texto[100];
	int numSubs = 0;

	cout << "Digite um texto(# para finalizar): " << endl;
	cin.getline(texto, 100);

	for (int i = 0; i < strlen(texto); i++)
	{
		if (texto[i] == '#')
		{
			break;
		}
		else if (texto[i] == '!')
		{
			cout << texto[i] << '!';
			numSubs++;
			continue;
		}
		else if (texto[i] == '.')
		{
			texto[i] = '!';
			numSubs++;
		}

		cout << texto[i];
	}

	cout << endl;
	cout << "Subistituições: " << numSubs;

}