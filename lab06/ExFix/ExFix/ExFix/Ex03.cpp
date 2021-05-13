#include <iostream>
#include <Windows.h>
#include <math.h>
#include <climits>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	short var1; int var2; long var3; long long var4; int total;
	


	cout << left; cout.width(12); cout << "short:";
	cout << right; cout.width(2); cout << sizeof var1 << " bytes" << endl;

	cout << left; cout.width(12); cout << "int:";
	cout << right; cout.width(2); cout << sizeof var2 << " bytes" << endl;

	cout << left; cout.width(12); cout << "long:";
	cout << right; cout.width(2); cout << sizeof var3 << " bytes" << endl;

	cout << left; cout.width(12); cout << "long long:";
	cout << right; cout.width(2); cout << sizeof var4 << " bytes" << endl;

	total = sizeof var1 + sizeof var2 + sizeof var3 + sizeof var4;

	cout << left; cout.width(12); cout << "Total:";
	cout << right; cout.width(2); cout << total << " bytes" << endl;



}