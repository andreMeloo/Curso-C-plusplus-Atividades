#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	const int metrosPorKM = 1000;
	int distancia;

	cout << "Entre com a distancia em metros: ";
	cin >> distancia;
	cout << distancia << " metros equivalem a " << distancia / metrosPorKM << " quilômetros e " << distancia % metrosPorKM << " metros";
}