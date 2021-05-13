#include <iostream>
#include <Windows.h>

using namespace std;
void Linha(void);
void Pequena(void);
void Media(void);
void Grande(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	Pequena();
	Media();
	Grande();
	cout << "Programação de Computadores" << endl;
	Grande();
	Media();
	Pequena();
	
}

void Linha()
{
	cout << "----------";
}

void Pequena()
{
	Linha(); cout << endl;
}

void Media()
{
	Linha(); Linha(); cout << endl;
}

void Grande()
{
	Linha(); Linha(); Linha(); cout << endl;
}