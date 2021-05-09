#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

bool testarBit(unsigned char, int);
void exibirBit(unsigned char);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	unsigned char valor_usuario;

	cout << "Digite um valor entre 0 e 255: ";
	cin >> valor_usuario;
	cout << "O numero " << valor_usuario << " em binario é "; exibirBit(valor_usuario);
	
}

bool testarBit(unsigned char solucao, int posicaoBit)       
{
	unsigned char mascara = 1 << posicaoBit;          
	if ((solucao & mascara))          
	{
		return solucao & mascara;
	}
	else
	{
		return solucao & mascara;
	}
}

void exibirBit(unsigned char num)
{
	
	
	for (int i = 0; i < 8; i++)
	{
		if (testarBit(num, i))
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
}