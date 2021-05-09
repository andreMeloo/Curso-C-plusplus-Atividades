#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

struct horario
{
	int horas;
	int minutos;
};

void MostrarHorario(horario*);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	horario relogio;
	horario* ptrRelogio = &relogio;
	char ch;

	cout << "Por gentileza digite o horário atual(HH:MM): ";
	cin >> relogio.horas >> ch >> relogio.minutos;
	MostrarHorario(&relogio);

}

void MostrarHorario(horario * ptrHora)
{
	ptrHora->horas += 1;
	cout << "Seu relogio está atrasado, o horário correto é " << ptrHora->horas << ":" << ptrHora->minutos;
}