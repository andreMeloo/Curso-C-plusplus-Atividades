#define _CTR_NO_SECURE_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num;

	cout << "Você quer que eu conte de 1 até que número? ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = num; i > 0; i--)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = 1; i <= num; i += 2)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = num - 1; i > 0; i -= 2)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = 2; i <= num; i += 2)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for ( int i = num; i >= 2; i -= 2)
	{
		cout << i << ' ';
	}


}