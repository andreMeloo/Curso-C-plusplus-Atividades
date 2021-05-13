#include <iostream>
#include <Windows.h>
using namespace std;

long long calculo(long long, long long);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	long long resultado = 200530 * 420800LL;
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(200530, 420800) << endl;
	cout << "\n\n" << "Nessa quest�o os valores passados na fun��o s�o LL e a opera��o deles s�o retornados\ndiretos sem passar por nenhuma vari�vel, assim o compilador grava na mem�ria\num espa�o alocado pra long\n";
	cout << "J� no caso da vari�vel resultado, apesar dela ser declarada como LL, o compilador vai fazer primeiro o calculo, gravar como int o valor errado e s�\ndepois atribuir o valor a vari�vel, ficando assim errada";

	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}