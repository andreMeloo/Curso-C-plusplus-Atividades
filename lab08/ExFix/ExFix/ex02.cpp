#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float v, s = 1, e = 200, m = (1 / pow(2, 2)) + (1 / pow(2, 3)) + (1 / pow(2, 7)) + (1 / pow(2, 9));
	v = s * 2 * (pow(2, e - 127)) * (1 + m);
	cout << v;
}