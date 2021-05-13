#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int matriz[4][4] = { {3,1,5,5},
						 {1,5,5,6},
						 {2,3,4,5},
						 {4,9,1,8} };
	int soma[4] = { 0 };

	for (int j = 0; j < 4; j++)
		for (int i = 0; i < 4; i++)
			soma[j] += matriz[i][j];

	cout << "A soma das colunas: ";
	for (int i = 0; i < 4; i++)
		cout << soma[i] << ' ';

}