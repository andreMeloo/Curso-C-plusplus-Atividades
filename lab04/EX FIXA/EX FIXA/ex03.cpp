#include <iostream>
#include <Windows.h>

using namespace std;
void UmTres(void);
void Dois(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	cout << "Começando agora: " << endl;
	UmTres();
	cout << "Pronto!" << endl;

}

void UmTres()
{
	cout << "Um ";
	Dois();
	cout << "Três" << endl;
}

void Dois()
{
	cout << "Dois ";
}