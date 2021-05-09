#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num1, num2;

	cout << "Digite 2 numero inteiros: " << endl;
	cin >> num1;
	cin >> num2;
	cout << "O quociente de " << num1 << "\\" << num2 << " é " << num1 / num2 << endl;
	cout << "O resto da divisão " << num1 << "%" << num2 << " é " << num1 % num2 << endl;
}