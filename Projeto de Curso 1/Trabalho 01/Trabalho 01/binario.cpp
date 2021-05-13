#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

unsigned short ligarBit(unsigned short solucao, int posicaoBit)          // funcao responsável por ligar um bit na posicao a escolha;
{
	unsigned short mascara = 1 << posicaoBit;          // variavel inicializa no valor 1 e é operada pra mover seus bits para esquerda um numero de posicoes a escolha;
	return solucao | mascara;          // funcao retorna valor inteiro resultado de um OR entre a solucao inicial e mascara criada;
}




unsigned short desligarBit(unsigned short solucao, int posicaoBit)          // funcao responsável por ligar um bit na posicao a escolha;
{
	unsigned short mascara = ~(1 << posicaoBit);          // variavel inicializa no valor 1 e é operada pra mover seus bits para esquerda um numero de posicoes a escolha, e se aplica um NOT para que fique no valor desejado para manipulacao;
	return solucao & mascara;          // funcao retorna valor inteiro resultado de um AND entre a solucao inicial e mascara criada;
}




bool testarBit(unsigned short solucao, int posicaoBit)          // funcao responsável por ligar um bit na posicao a escolha;
{
	unsigned short mascara = 1 << posicaoBit;          // variavel inicializa no valor 1 e é operada pra mover seus bits para esquerda um numero de posicoes a escolha;
	if ((solucao & mascara) == true)          // teste para saber se o bit está desligado ou ligado;
	{
		return (solucao & mascara);           // como a funcao retorna um booleano, caso retorne qualquer numero > que 0 será true, caso retorne 0 será falso;
	}
	else
	{
		return (solucao & mascara);
	}
}



unsigned short andBinario(unsigned short solucao1, unsigned short solucao2)      // funcao realiza um AND e retorna o resultado inteiro
{
	return solucao1 & solucao2;
}



unsigned short orBinario(unsigned short solucao1, unsigned short solucao2)      // funcao realiza um OR e retorna o resultado inteiro
{
	return solucao1 | solucao2;
}



unsigned short bitsBaixos(unsigned short solucao)          // funcao testa os 8 ultimos bits e desliga todos, retornando somente os bits mais baixos originais;
{
	
	for (int i = 8; i < 16; i++)          //laço for para testar o bit de posicao 8 a 15 da solucao solicitada;
	{
		if (testarBit(solucao, i) == true)          // um teste de bit, se retornar true ele estará ligado, assim aplica-se um desligamento desse bit e salva na variavel solucao;
		{
			solucao = desligarBit(solucao, i);
		}

	}

	return solucao;          // por fim retorna a nova solucao com todos os 8 bits mais altos zerados;
}



unsigned short bitsAltos(unsigned short solucao)          // funcao testa os 8 primeiros bits e desliga todos, retornando somente os bits mais altos originais;
{
	         // variavel pra posicao dos bits;
	for (int i = 0; i < 8; i++)          //laço for para testar o bit de posicao 0 a 8 da solucao solicitada;
	{
		if (testarBit(solucao, i) == true)          // um teste de bit, se retornar true ele estará ligado, assim aplica-se um desligamento desse bit e salva na variavel solucao;
		{
			solucao = desligarBit(solucao, i);
		}

	}

	return solucao;          // por fim retorna a nova solucao com todos os 8 bits mais baixos zerados;
}



