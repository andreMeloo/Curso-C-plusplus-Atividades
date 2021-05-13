#define _CTR_NO_SECURE_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

struct login
{
	char nome[20];
	int senha;
};

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	login adm = { "pc_sly", 159357 };
	char user[20];
	int user_senha;
	cout << "Digite o usuário: ";
	cin >> user;
	cout << "Digite a senha: ";
	cin >> user_senha;

	for (int i = 0; i < strlen(adm.nome); i++)
	{
		if (adm.nome[i] != user[i] || adm.senha != user_senha)
		{
			cout << "Ops, Login ou senha incorreto!" << endl;
			break;
		}
		else if(i == strlen(adm.nome) - 1)
		{
			cout << "Login e senhas corretos!";
		}
	}
	

}