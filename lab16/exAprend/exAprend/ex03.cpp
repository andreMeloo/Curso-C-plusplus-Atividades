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

	int A[] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };
	int* ptr1 = new int[10], * ptr2 = new int[10];
	ptr1 = &A[0];
	ptr2 = &A[1];

	for (int i = 0; i < 9; i += 2)
	{
		cout << "[" << *(ptr1 + i) << "," << *(ptr2 + i) << "] ";
	}



	

}