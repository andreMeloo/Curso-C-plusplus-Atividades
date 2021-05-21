#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			num += i;
		}
		
	}
	
	cout << "\nA soma dos multiplos de 3 e 9 é " << num;

}