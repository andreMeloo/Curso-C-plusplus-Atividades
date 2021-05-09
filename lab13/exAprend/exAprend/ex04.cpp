#include <iostream>

using namespace std;

enum diaSemana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };
int main()
{
	char dias[7][10] =
	{
	"Domingo", "Segunda", "Terca", "Quarta" , "Quinta", "Sexta", "Sabado"
	};
	for (diaSemana ind = Domingo; ind <= Sabado; ind = diaSemana(ind + 1))
		cout << dias[ind] << endl;
	return 0;
}