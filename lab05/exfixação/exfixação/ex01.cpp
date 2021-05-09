#include <iostream>
#include <Windows.h>

using namespace std;

void mostraHora(int, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int hora, minuto;

	cout << "Entre com o n�mero de horas: ";
	cin >> hora;
	cout << "Entre com o n�mero de minutos: ";
	cin >> minuto;

	mostraHora(hora, minuto);

}

void mostraHora(int H, int M)
{
	char pontos = ':';
	int zero = 0;

	if (H < 10 && M < 10)
	{
		cout << "Agora s�o " << zero << H << pontos << zero << M;

	}
	else if (H < 10 && M >= 10)
	{
		cout << "Agora s�o " << zero << H << pontos << M;
	}
	else if (H >= 10 && M < 10)
	{
		cout << "Agora s�o " << H << pontos << zero << M;
	}
	else
	{
		cout << "Agora s�o " << H << pontos << M;
	}

}