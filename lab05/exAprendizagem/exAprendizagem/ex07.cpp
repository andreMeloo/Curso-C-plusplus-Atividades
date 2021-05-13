#include <iostream>
#include <Windows.h>
#include <math.h>


using namespace std;



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x;

	cout << "Digite um valor: ";
	cin >> x;
	cout << endl;
	cout << "Ao Quadrado: " << pow(x, 2) << endl;
	cout << "Ao Cubo: " << pow(x, 3) << endl;
	cout << "O Cubo do quadrado: " << pow(pow(x, 2), 3);
}