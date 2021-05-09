#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	string nome;
	char conceito = 0;

	conceito -= 1;
	cout << "Qual é o nome? ";
	cin >> nome;
	cout << "Qual seu conceito? ";
	cin >> conceito;
	cout << "\nBom dia " << nome << ", seu conceito é " << conceito;

}