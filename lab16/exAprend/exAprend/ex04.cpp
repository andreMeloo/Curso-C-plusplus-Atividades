#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int B[] = { 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };
	

	for (int i = 0, j = 9; i < 5 && j >= 5; i++, j--)
	{
		cout << '[' << B[i] << ',' << B[j] << "] ";
	}





}