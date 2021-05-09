#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char pontos;
	int hora, minutos;

	cout << "Que horas são? (HH:MM formato 24h): " << endl;
	cin >> hora >> pontos >> minutos;
	if (hora == 24)
	{
		if (minutos < 10)
		{
			hora = 00;
			cout << "O seu relogio está atrasado." << endl;
			cout << "Agora são 0" << hora << pontos << "0" << minutos;
		}
		else
		{
			hora = 00;
			cout << "O seu relogio está atrasado." << endl;
			cout << "Agora são 0" << hora << pontos << minutos;
		}
	}
	else
	{
		if (hora < 10 && minutos < 10)
		{
			hora += 1;
			cout << "O seu relogio está atrasado." << endl;
			cout << "Agora são 0" << hora << pontos << "0" << minutos;
		}
		else if (hora < 10)
		{
			hora += 1;
			cout << "O seu relogio está atrasado." << endl;
			cout << "Agora são 0" << hora << pontos << minutos;
		}
		else if (minutos < 10)
		{
			hora += 1;
			cout << "O seu relogio está atrasado." << endl;
			cout << "Agora são " << hora << pontos << "0" << minutos;
		}
		else
		{
			hora += 1;
			cout << "O seu relogio está atrasado." << endl;
			cout << "Agora são " << hora << pontos << minutos;
		}
	}

}