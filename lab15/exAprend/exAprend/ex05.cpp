#define CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <Windows.h>
#include <cstring>
#include <cmath>

using namespace std;

struct ASCII
{
	char caractere;
	int valor_tabela;
};

ASCII* retornaEndereco(char, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	ASCII* ptrValores;
	ASCII escolhaUsuario;

	cout << "Digite um caractere a sua escolha: ";
	cin >> escolhaUsuario.caractere;
	escolhaUsuario.valor_tabela = escolhaUsuario.caractere;

	ptrValores = retornaEndereco(escolhaUsuario.caractere, escolhaUsuario.valor_tabela);
	cout << "O caractere escolhido é: " << ptrValores->caractere << "\n" << "O inteiro associado a o caractere é: " << ptrValores->valor_tabela << endl;

	delete ptrValores;
	system("PAUSE");
}   

ASCII* retornaEndereco(char x, int y)
{
	ASCII* ptrTemp = new ASCII;
	ptrTemp->caractere = x;
	ptrTemp->valor_tabela = y;
	return ptrTemp;
}