#include <iostream>
#include <windows.h>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char num1[1];
	int num2;

	cout << "digite dois numeros: " << endl;
	cin >> num1;
	cin >> num2;
	cout << atoi(num1) + num2;
	
}