           // Arquivo principal, responsavel por rodar o programa;
#include <iostream>
#include <Windows.h>
#include <math.h>
#include "genetico.h"
#include "binario.h"

using namespace std;

#define green "\033[32m"
#define red "\033[31m"
#define default "\033[m"



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int soulucao_inicial[6];          // vetor INT 32 bits para que ocorra o teste de numero digitado correto;
	unsigned short solucao_16b[6];          //vetor SHORT de 16 bits que receberá os valores corretos das soluções digitadas;
	

           /* Inicialmente o programa irá pedir que o usuário digite 6 numeros dentro de um limite estipulado 
	       e irá testar se esses numeros são válidos, se o número testado for válido ele guarda na variavel de 16 bits */

	cout << "Entre com 6 soluções iniciais (números entre 0 e 65535):" << endl;
	for (int i = 0; i < 6; i++)          // laço que prende o usuário até que ele digite os 6 numeros corretamente;
	{
		cout << i + 1 << "° Número ->";
		cin >> soulucao_inicial[i];
		if (soulucao_inicial[i] < 0 || soulucao_inicial[i] > 65535)          // teste se o numero digitado é valido
		{
			cout << "Número invalido!\nPor favor digite um numero positivo e menor ou igual a 65535!\n";
			i -= 1;          // Caso numero seja invalido, o for é reiniciado para que o usuário digite um numero novamente;
		}
		else
		{
			solucao_16b[i] = soulucao_inicial[i];          // Caso numero válido, variavel 16 bits recebe o valor que não irá causar overflow nela;
		}
	}
	cout << "\n\n";
	cout << "Resultado da Avaliação" << endl;          // Programa irá exibir formatado os valores e resultados das operações baseado nos numeros escolhidos;
	cout << "----------------------" << endl;
	for (int x = 0; x < 6; x++)         // laço para realizar a avaliação dos 6 valores escolhidos sem nenhuma modificação;
	{
		if (funcaoDeAvaliacao(solucao_16b[x]) == true)
		{
			cout << green << "OK" << default << endl;
		}
		else
		{
			cout << red << "X" << default << endl;
		}
		
	}
	cout << "----------------------" << endl;
	if (funcaoDeAvaliacao(cruzamentoPontoUnico(solucao_16b[0], solucao_16b[1])) == true)          // Sequencia de IFS para fazer avaliacao e manipulação de bits. 
	{                                                                                             // Programa irá mostrar se o peso ultrapassa os 20 KG e qual valor dentro da mochila em produtos. 
		cout << green << "OK" << default << endl;                                                 // Caso ultrapasse ele mostra um X vermelho, caso esteja dentro dos 20 kg suportados, ela mostra um OK verde;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funcaoDeAvaliacao(cruzamentoAritmetico(solucao_16b[2], solucao_16b[3])) == true)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funcaoDeAvaliacao(mutacaoSimples(solucao_16b[4])) == true)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

	if (funcaoDeAvaliacao(mutacaoDupla(solucao_16b[5])) == true)
	{
		cout << green << "OK" << default << endl;
	}
	else
	{
		cout << red << "X" << default << endl;
	}

}
