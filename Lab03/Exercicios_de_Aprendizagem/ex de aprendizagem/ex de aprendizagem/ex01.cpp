#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int anos;
	float nCigarros, precoCigarro, gastoTotal;

	cout << "A quantos anos voc� fuma cigarro? " << endl;
	cin >> anos;
	anos = anos * 365;
	cout << "Quantos cigarros voc� fuma por dia? " << endl;
	cin >> nCigarros;
	cout << "Qual o pre�o m�dio de uma carteira de cigarros? " << endl;
	cin >> precoCigarro;
	gastoTotal = anos * (nCigarros * (precoCigarro / 20));
	cout << "Voc� gastou at� agora " << gastoTotal << " em cigarros!" << endl;

}