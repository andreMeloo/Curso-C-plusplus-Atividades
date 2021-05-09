#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int bitsBaixos(int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int valor_usuarios;
	cout << "Digite um valor inteiro: ";
	cin >> valor_usuarios;
	cout << "Os 16 bits mais baixos desse valor correspondem ao numero " << bitsBaixos(valor_usuarios);

}

int bitsBaixos(int valor)
{
	int mascara;

	mascara = 65'535;
	valor = valor & mascara;
	return valor;
}

