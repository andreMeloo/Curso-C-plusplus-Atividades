#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float num1;
	int num1I;

	cout << "Digite um n�mero real(com casa decimal): " << endl;
	cin >> num1;
	num1I = num1;
	cout << "A parte inteira: " << num1I << endl;
	cout << "A parte fracion�ria �: " << num1 - num1I;
}