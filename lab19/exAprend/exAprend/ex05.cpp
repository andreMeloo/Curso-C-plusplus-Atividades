#include <iostream>
#include <Windows.h>
#include <cstring>
#include <cmath>

using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int valor_char = 0;
	char tab_asc[16][16];
	for (int i = 0; i < 16; i++)
		for (int j = 0; j < 16; j++)
		{
			tab_asc[j][i] = valor_char;
			valor_char += 1;
		}

	int xIn = 0, yIn = 0, xF = 0, yF = 0, linhas = 0, colunas = 0;
	cout << "Entre com as coordenadas da região de interesse" << endl;
	cout << "De: ";
	cin >> xIn >> yIn;
	cout << "Ate: ";
	cin >> xF >> yF;
	linhas = (xF - xIn) + 1;
	colunas = (yF - yIn) + 1;
	char** mat_reg = new char* [linhas];
	char* vet = new char[colunas];
	for (int i = 0; i < linhas; i++)
		mat_reg[i] = new char[linhas];

	for (int i = 0, x = xIn; i < linhas; i++, x++)
		for (int j = 0, y = yIn; j < colunas; j++, y++)
			mat_reg[i][j] = tab_asc[x][y];


	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
			cout << mat_reg[i][j] << ' ';

		cout << endl;
	}

}