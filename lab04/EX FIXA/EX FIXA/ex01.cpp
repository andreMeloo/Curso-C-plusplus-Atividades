#include <iostream>
#include <Windows.h>

using namespace std;
string sorrir(void);
void sorrir2(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << sorrir() << " " << sorrir() << " " << sorrir() << " " << sorrir() << endl;
	cout << sorrir() << " " << sorrir() << endl;
	cout << sorrir();
	cout << "\n\n";

	sorrir2(); cout << " "; sorrir2(); cout << " "; sorrir2(); cout << " "; sorrir2();
	cout << endl;
	sorrir2(); cout << " "; sorrir2();
	cout << endl;
	sorrir2(); 
	cout << endl;

	return 0;
}

string sorrir()
{
	string açãoSorrir = "Sorria!";

	return açãoSorrir;
}

void sorrir2()
{
	cout << "Sorria!";
}