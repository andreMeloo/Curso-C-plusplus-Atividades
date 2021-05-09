#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "funcoes.h"


using namespace std;



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, y;
	cout << "Digite as coordenadas do vetor:\n";
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << endl;
	cout << "Coordenadas polares do vetor:\n";
	cout << "(" << modulo(x, y) << ", " << retornaGraus(x, y) << ")";
}