#include <iostream>
#include <Windows.h>

using namespace std;

void mostraHora(int, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int hora, minuto;

	cout << "Entre com o número de horas: ";
	cin >> hora;
	cout << "Entre com o número de minutos: ";
	cin >> minuto;

	mostraHora(hora, minuto);

}

void mostraHora(int H, int M)
{
	char pontos = ':';
	int zero = 0;

	if (H < 10 && M < 10)
	{
		cout << "Agora são " << zero << H << pontos << zero << M;

	}
	else if (H < 10 && M >= 10)
	{
		cout << "Agora são " << zero << H << pontos << M;
	}
	else if (H >= 10 && M < 10)
	{
		cout << "Agora são " << H << pontos << zero << M;
	}
	else
	{
		cout << "Agora são " << H << pontos << M;
	}

}