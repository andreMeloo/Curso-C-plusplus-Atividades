#include <iostream>
#include <Windows.h>
#include <climits>
using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout.right; cout.width(5); cout << "12345" << " - " << "$" << "00" << " - "; cout.right; cout.width(2); cout << "00" << "Kg - \n";
	cout.right; cout.width(5); cout << "12345" << " - " << "$" << "00" << " - "; cout.right; cout.width(2); cout << "0" << "Kg - ";
}
