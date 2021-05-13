#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

char saidaTabelaASCII(int);


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "80  ->  " << saidaTabelaASCII(80) << endl;
	cout << "114 ->  " << saidaTabelaASCII(114) << endl;
	cout << "111 ->  " << saidaTabelaASCII(111) << endl;
	cout << "103 ->  " << saidaTabelaASCII(103) << endl;
	cout << "67  ->  " << saidaTabelaASCII(67) << endl;
	cout << "111 ->  " << saidaTabelaASCII(111) << endl;
	cout << "109 ->  " << saidaTabelaASCII(109) << endl;
	cout << "112 ->  " << saidaTabelaASCII(112);

}

char saidaTabelaASCII(int numero)
{
	char saida;

	return saida = numero;

}