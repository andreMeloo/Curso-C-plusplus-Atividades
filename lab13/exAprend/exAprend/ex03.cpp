#include <iostream>
#include <Windows.h>
#include <cstring>

using namespace std;

struct Data
{
	int dia, mes, ano;
};

struct horario
{
	int hora, min;
};

struct evento
{
	char descricao[18];
	Data dataEvento;
	horario horaEvento;
};

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	evento MSS[10];

	cout << "Entre com 2 eventos: " << endl;
	cout << "#1" << endl;
	cout << "Data: ";
	cin >> MSS[0].dataEvento.dia >> MSS[0].dataEvento.mes >> MSS[0].dataEvento.ano;
	cout << "Hora: ";
	cin >> MSS[0].horaEvento.hora >> MSS[0].horaEvento.min;
	cin.get();
	cout << "Desc: ";
	cin.getline(MSS[0].descricao, 18);
	cout << "#2" << endl;
	cout << "Data: ";
	cin >> MSS[1].dataEvento.dia >> MSS[1].dataEvento.mes >> MSS[1].dataEvento.ano;
	cout << "Hora: ";
	cin >> MSS[1].horaEvento.hora >> MSS[1].horaEvento.min;
	cin.get();
	cout << "Desc: ";
	cin.getline(MSS[1].descricao, 18);
	cout << "--------------------------" << endl;
	cout << "- Eventos Cadastrados -" << endl;
	cout << MSS[0].dataEvento.dia << "/" << MSS[0].dataEvento.mes << "/" << MSS[0].dataEvento.ano << " ";
	cout << MSS[0].horaEvento.hora << ":" << MSS[0].horaEvento.min << "0 ";
	cout << MSS[0].descricao << endl;

	cout << MSS[1].dataEvento.dia << "/" << MSS[1].dataEvento.mes << "/" << MSS[1].dataEvento.ano << " ";
	cout << MSS[1].horaEvento.hora << ":" << MSS[1].horaEvento.min << "0 ";
	cout << MSS[1].descricao << endl;


}