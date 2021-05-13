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
	cout << "Função: " << calculo(200530, 420800) << endl;
	cout << "\n\n" << "Nessa questão os valores passados na função são LL e a operação deles são retornados\ndiretos sem passar por nenhuma variável, assim o compilador grava na memória\num espaço alocado pra long\n";
	cout << "Já no caso da variável resultado, apesar dela ser declarada como LL, o compilador vai fazer primeiro o calculo, gravar como int o valor errado e só\ndepois atribuir o valor a variável, ficando assim errada";

	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}