#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void inicializar(void);
void ligar(void);
void verificar(void);
void ativar(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	inicializar();
}

void inicializar()
{
	int valor;
	srand(time(NULL));
	valor = rand();
	cout << "Inicializando Sistema:" << endl;
	ligar();;
	getc(stdin);
	verificar();
	getc(stdin);
	ativar();
	getc(stdin);
	cout << "Inicialização concluída.\n\n" << endl;
	if (valor > 16384)
	{
		cout << "Sistema em funcionamento." << endl;
	}
	else if (valor <= 16384)
	{
		cout << "Falha na inicialização." << endl;
	}

}

void ligar()
{
	cout << "- Ligando dispositivos";
}

void verificar()
{
	cout << "- Verificando integridade";
}

void ativar()
{
	cout << "- Ativando processos";
}