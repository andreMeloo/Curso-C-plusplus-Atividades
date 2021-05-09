#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int bitsAltos(int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int valor_usuario;
	cout << "Digite um valor inteiro: ";
	cin >> valor_usuario;
	cout << "Os 16 bits mais altos desse valor correspondem ao numero " << bitsAltos(valor_usuario);

}

int bitsAltos(int valor)
{
	int mascara;

	mascara = 65535 << 16;
	valor = valor & mascara;
	return valor >> 16;
}