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

	char texto[100] = " ";
	char texto_verd[100] = " ";
	cout << "Digite um texto: " << endl;
	cin.getline(texto, 100);
	int i = 0;
	while (texto[i] != '@')
	{
		texto_verd[i] = texto[i];
		i++;
	}
	cout << texto_verd;

}