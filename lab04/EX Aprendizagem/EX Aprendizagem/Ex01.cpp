#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double p[2], q[2], resultadoParcial, resultadoFinal;
	char virgula;

	cout << "----- Calculo da distância entre 2 pontos -----\n\n\n";
	cout << "Digite as coordenadas do ponto P x,y: " << endl;
	cin >> p[0] >> virgula >> p[1];
	cout << "Digite as coordenadas do ponto Q x,y: " << endl;
	cin >> q[0] >> virgula >> q[1];

	resultadoParcial = pow(p[0] - q[0], 2) + pow(p[1] - q[1], 2);
	resultadoFinal = sqrt(resultadoParcial);

	cout << "Ponto P: " << endl;
	cout << "(" << p[0] << virgula << p[1] << ")" << endl;
	cout << "Ponto Q: " << endl;
	cout << "(" << q[0] << virgula << q[1] << ")" << endl;
	cout << endl;
	cout << "A distância entre P e Q é de: " << resultadoFinal << endl;

}