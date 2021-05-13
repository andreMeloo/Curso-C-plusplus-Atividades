#include <iostream>
#include <Windows.h>

using namespace std;

int main()
	{
		SetConsoleCP(1252);
		SetConsoleOutputCP(1252);

		int idade;

		cout << "Digite a sua idade em anos: " << endl;
		cin >> idade;
		cout << idade << " anos equivalem a " << idade * 365 << " dias." << endl;
	}
