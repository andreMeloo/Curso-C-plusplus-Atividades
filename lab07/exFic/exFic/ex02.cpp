#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;


void alerta(void);
void lerSenha(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	string senha;

	alerta();
	lerSenha();
	cout << "Obrigado!";

}

void lerSenha()
{
	string senha;
	cout << "Digite sua senha: __________\b\b\b\b\b\b\b\b\b\b";
	cin >> senha;
}

void alerta()
{
	string alerta;
	cout << "Iniciando com um som..." << endl;
	alerta = "\a";
	cout << alerta;
}