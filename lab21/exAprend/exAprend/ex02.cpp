#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num = 0;

	while (cin >> num && num > 0)
	{
		if (num <= 2 || num % 2 != 0)
		{
			cout << num << " é primo!" << endl;
		}
		else
		{
			cout << num << " não é primo" << endl;

		}
		
	}
	if (num <= 0)
	{
		cout << "Número invalido, até a proxima!";
	}

}