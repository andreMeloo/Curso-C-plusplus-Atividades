#include <iostream>
#include <Windows.h>
#include <math.h>


using namespace std;



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int hora_partida, min_partida, hora_chegada, min_chegada;
	char pontos;

	cout << "Digite o horário de partida (HH:MM): ";
	cin >> hora_partida >> pontos >> min_partida;
	cout << "Digite o horário de chegada (HH:MM): ";
	cin >> hora_chegada >> pontos >> min_chegada;
	cout << endl;
	if (min_partida > min_chegada)
	{
		cout << "O tempo total de viagem foi " << (hora_chegada - hora_partida) - 1 << " horas e " << (60 - min_partida + min_chegada) << " min";
	}
	else
	{
		cout << "O tempo total de viagem foi " << hora_chegada - hora_partida << " horas e " << (min_chegada - min_partida) << " min";
	}


}