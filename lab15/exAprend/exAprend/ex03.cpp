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
	
	int qnt_inteiros;
	cout << "Quantos valores deseja guarar? ";
	cin >> qnt_inteiros;
	int* ptr_ints = new int[qnt_inteiros];

	cout << "Quais os valores você quer guardar? ";
	for (int i = 0; i < qnt_inteiros; i++)
	{
		cin >> ptr_ints[i];
	}

	cout << "Os valores ";

	for (int i = 0; i < (qnt_inteiros - 2); i++)
	{
		cout << ptr_ints[i] << ", ";
	}

	cout << ptr_ints[qnt_inteiros - 2] << " e " << ptr_ints[qnt_inteiros - 1] << " foram armazenados.";
	delete[] ptr_ints;

}