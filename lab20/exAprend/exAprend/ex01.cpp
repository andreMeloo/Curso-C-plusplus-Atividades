#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int dist;
	double valorDist;


	cout << "Digite a distância da sua viagem: ";
	cin >> dist;

	if (dist <= 200)
	{
		valorDist = dist * 0.5;
	}
	else if (dist > 200 && dist <= 400)
	{
		valorDist = dist * 0.4;
	}
	else
	{
		valorDist = dist * 0.3;
	}


	cout << "O valor da viagem é " << valorDist;

}
