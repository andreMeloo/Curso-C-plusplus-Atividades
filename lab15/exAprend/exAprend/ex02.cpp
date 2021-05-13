#define CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <Windows.h>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int* ptr = new int;
	*ptr = 100;
	cout << "Conteúdo armazenado: " << *ptr << endl;
	cout << "Digite um novo valor para esse bloco: ";
	cin >> *ptr;
	delete ptr;

}
	