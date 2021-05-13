#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int medida = 10;

	cout << "Medida: " << medida << endl;
	cout << "2x Medida: " << medida * 2 << endl;
	cout << "Medida ao quadrado: " << pow(medida, 2) << endl;
}