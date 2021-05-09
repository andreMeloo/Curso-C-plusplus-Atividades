#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float ladoA, ladoB, altura, areaBase, volume;

	cout << "------ Calculo da área da base e do volume de um prisma retangular ------" << endl;
	cout << "\n-------------------------------------------------------------------------" << endl;
	cout << "Digite o valor do comprimento (Lado A m): " << endl;
	cin >> ladoA;
	cout << "Digite o valor da largura (Lado B m): " << endl;
	cin >> ladoB;
	areaBase = ladoA * ladoB;
	cout << "Área da Base = " << areaBase << " m²" << endl;
	cout << "Agora digite a Altura (h) para calcularmos o volume: " << endl;
	cin >> altura;
	volume = altura * areaBase;
	cout << "Volume do Prisma = " << volume << " m³" << endl;

}