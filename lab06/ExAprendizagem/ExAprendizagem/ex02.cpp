#include <iostream>
#include <Windows.h>
#include <math.h>
#define p�o 0.35
#define pastel 0.25

using namespace std;



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float total_a_pagar, numPaes, numPasteis;

	cout << "Quantos p�es? ";
	cin >> numPaes;
	cout << "Quantos pasteis?";
	cin >> numPasteis;

	total_a_pagar = (numPaes * p�o) + (numPasteis * pastel);

	cout << "\n" << "O total das compras � R$" << total_a_pagar;

}