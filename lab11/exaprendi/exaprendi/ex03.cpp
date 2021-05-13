#include <iostream>
#include <windows.h>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char nome[20], data[15];
	cout << "Digite seu nome completo: ";
	cin.getline(nome, 20);
	cin.get();
	cout << "Digite a data de hoje: ";
	cin >> data;
	cout << nome << " esteve aqui em " << data;
}