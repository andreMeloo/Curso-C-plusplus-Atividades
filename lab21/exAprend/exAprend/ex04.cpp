#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	long num = 1, num2 = 2, temp = 0, soma = 2;
	while (num < 4000000)
	{
		temp = num2;
		temp = num + temp;
		num = num2;
		num2 = temp;

		

		if (num2 % 2 == 0)
		{
			soma += num2;
			cout << num2 << endl;
		}
	}

	cout << '\n' << soma;

}