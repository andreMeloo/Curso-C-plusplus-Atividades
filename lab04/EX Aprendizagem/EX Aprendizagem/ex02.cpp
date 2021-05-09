#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double angulo;

	cout << "Digite um ângulo: ";
	cin >> angulo;
	cout << sin(angulo*3.14/180);

}