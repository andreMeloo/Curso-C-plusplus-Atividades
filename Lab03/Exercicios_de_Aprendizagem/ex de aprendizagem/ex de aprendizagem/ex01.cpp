#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int anos;
	float nCigarros, precoCigarro, gastoTotal;

	cout << "A quantos anos você fuma cigarro? " << endl;
	cin >> anos;
	anos = anos * 365;
	cout << "Quantos cigarros você fuma por dia? " << endl;
	cin >> nCigarros;
	cout << "Qual o preço médio de uma carteira de cigarros? " << endl;
	cin >> precoCigarro;
	gastoTotal = anos * (nCigarros * (precoCigarro / 20));
	cout << "Você gastou até agora " << gastoTotal << " em cigarros!" << endl;

}