#define _CTR_NO_SECURE_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char frase[100] = " ";
	char temp2[100] = " ";
	char temp[100] = " ";
	cout << "Digite uma frase: ";
	cin.getline(frase, 100);
	int i = 0;
	int j = 0;
	while (frase[i] != '\0')
	{
		if (frase[i] != ' ')
		{
			temp[j] = frase[i];
			j++;
			i++;
		}
		else
		{
			i++;
		}
		
		
	}
	while (i >= 0)
	{
		temp2[i] = temp[i];
		i--;
	}
	if ( strcmp(temp, temp2) == 0 )
	{
		cout << frase << ": Frase é um palindromo!";
	}
	else
	{
		cout << frase << ": Frase não é um palindromo!";
	}
	

}