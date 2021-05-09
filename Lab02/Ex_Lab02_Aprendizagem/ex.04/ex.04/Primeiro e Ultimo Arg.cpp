#include <iostream>
#include <Windows.h>
using namespace std;

int main(int argc, char ** argv)
{	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	cout << "Estou aprendendo " << argv[3] <<  "/" << argv[1];
}