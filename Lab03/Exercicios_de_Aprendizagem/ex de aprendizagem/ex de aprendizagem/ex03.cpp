#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char horas, minutos;
	float h, min;
	float metsCorrCicli = 7.0, metsNatacao = 8.0, caloriasTotais, peso;

	cout << "Digite o seu Peso em Kg: " << endl;
	cin >> peso;
	cout << "Quanto tempo voc� corre por semana? " << endl;
	cin >> h >> horas >> min >> minutos;
	caloriasTotais = metsCorrCicli * peso * (((h * 60) + min) / 60);
	cout << "Quanto tempo voc� pedala por semana? " << endl;
	cin >> h >> horas >> min >> minutos;
	caloriasTotais += metsCorrCicli * peso * (((h * 60) + min) / 60);
	cout << "Quanto tempo voc� nada por semana? " << endl;
	cin >> h >> horas >> min >> minutos;
	caloriasTotais += metsCorrCicli * peso * (((h * 60) + min) / 60);
	cout << "Voc� gasta " << caloriasTotais << " calorias por semana" << endl;
}