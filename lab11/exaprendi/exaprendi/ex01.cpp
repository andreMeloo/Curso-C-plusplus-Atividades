#include <iostream>
#include <windows.h>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	string senha = "fernandes", minhaSenha;
	cout << "Digite a senha: ";
	cin >> minhaSenha;
	if (senha == minhaSenha)
	{
		cout << "Senha correta!" << endl;
	}
	else
	{
		cout << "Senha Incorreta!";
	}

}