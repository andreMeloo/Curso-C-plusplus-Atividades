#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int segundos, minutos;
	cout << "Digite uma quantidade de minutos :" << endl;
	cin >> minutos;
	segundos = 60 * minutos;
	cout << "Existem " << segundos << " segundos em " << minutos << " minutos" << endl;

	system("Pause");
	return 0;
}