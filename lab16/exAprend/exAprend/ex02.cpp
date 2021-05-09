#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char plv1[12], plv2[12], plv3[12], plv4[12];
	int tamVet = 3, cont = 0;

	cout << "digite 4 palavras: " << endl;
	cin >> plv1 >> plv2 >> plv3 >> plv4;

	tamVet += strlen(plv1) + strlen(plv2) + strlen(plv3) + strlen(plv4);
	char* ptrString = new char[tamVet];
	
	for (int i = 0; i < strlen(plv1); i++)
	{
		ptrString[cont] = plv1[i];
		cont += 1;
	}
	ptrString[cont] = ' ';
	cont += 1;
	for (int i = 0; i < strlen(plv2); i++)
	{
		ptrString[cont] = plv2[i];
		cont += 1;
	}
	ptrString[cont] = ' ';
	cont += 1;
	for (int i = 0; i < strlen(plv3); i++)
	{
		ptrString[cont] = plv3[i];
		cont += 1;
	}
	ptrString[cont] = ' ';
	cont += 1;
	for (int i = 0; i < strlen(plv4) + 1; i++)
	{
		ptrString[cont] = plv4[i];
		cont += 1;
	}


	cout << "Concatenando as palavras obtén-se: " << endl;
	cout << ptrString;
	

}