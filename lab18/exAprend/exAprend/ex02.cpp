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

	int sum = 0;
	for (int i = 1; i < 100; i += 2)
	{
		sum += i;
		cout << sum << ' ';
	}
	cout << endl;
	int i = 1;
	sum = 0;
	while (i < 100)
	{
		sum += i;
		cout << sum << ' ';
		i += 2;
	}
	cout << endl;
	i = 1;
	sum = 0;
	do
	{
		sum += i;
		cout << sum << ' ';
		i += 2;
	} while (i < 100);



}