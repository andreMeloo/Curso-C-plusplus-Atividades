#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	string nome, sobrenome;
	cout << "Primeiro Nome? ";
	cin >> nome;
	cout << "Segundo Nome? ";
	cin >> sobrenome;
	cout << "Bom dia, " << nome << " " << sobrenome << endl;
	cout << "Seja bem vindo " << nome[0] << sobrenome[0];

}