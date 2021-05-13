#include <iostream>
#include <Windows.h>
#include <cstring>

using namespace std;

union jogador {
	char nome[25]; // nome do jogador
	int numero; // numero da camisa do jogador
};

struct gol {
	jogador jog; // identificação do jogador
	int hora, min; // hora e minuto em que o gol foi marcado
};

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	gol assistidos[3];
	int num1, num2;
	char ch;

	
	

	cout << "Digite os dados dos 3 ultimos gols: " << endl;
	cout << "Gol: ";
	cin >> assistidos[0].jog.nome >> assistidos[0].jog.numero >> assistidos[0].hora >> ch >> assistidos[0].min;
	cin.get();
	cin >> assistidos[1].jog.nome >> assistidos[1].jog.numero >> assistidos[1].hora >> ch >> assistidos[1].min;
	cin.get();
	cin >> assistidos[2].jog.nome >> assistidos[2].jog.numero >> assistidos[2].hora >> ch >> assistidos[2].min;

}