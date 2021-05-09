#include <iostream>
#include <Windows.h>
#include <cmath>
#include "binario.h"

using namespace std;

bool funcaoDeAvaliacao(unsigned short solucao)         // funcao vai avaliar bit a bit, se o bit estiver ligado o peso e o valor correspondente aquele bit será somado ao peso e valor total;
{
	int peso[16] = { 1,4,2,5,4,2,1,4,3,2,1,9,4,5,3,12 }, valor[16] = {12,4,3,10,15,20,10,2,1,1,3,15,10,8,4,4};           // criação dos vetores peso e valor e com seus devidos valores;
	int peso_total = 0, valor_total = 0;                                                                                         // no caso, como as manipulações é feito da esquerda pra direita, o vetor 0 tem que ser a letra P e ir decrescendo;
	bool avaliacao;

	for (int x = 0; x < 16; x++)          // laço for para teste dos bits, se 1 soma o peso e valor correspondente;
	{
		if (testarBit(solucao, x) == true)
		{
			peso_total += peso[x];
			valor_total += valor[x];
		}

	}

	cout << right; cout.width(5); cout << solucao; cout << right; cout.width(2); cout << "-";
	cout << right; cout.width(2); cout << "$" << valor_total; cout << right; cout.width(2); cout << "-";
	cout << right; cout.width(3); cout << peso_total << "Kg - ";

	if (peso_total <= 20)         // condicao para detectar se o peso total da solucao, ultrapassa o valor de 20 que é o peso maximo da mochila;
	{
		avaliacao = true;
		return avaliacao;
	}
	else
	{
		avaliacao = false;
		return avaliacao;
	}

}



unsigned short cruzamentoPontoUnico(unsigned short solucao1, unsigned short solucao2) // funcao junta 2 solucoes, onde a solucao 1 tera somente seus bits mais altos originais e a solucao 2 tera somente seus bits mais baixos;
{
	return orBinario(bitsAltos(solucao1), bitsBaixos(solucao2));
}



unsigned short cruzamentoAritmetico(unsigned short solucao1, unsigned short solucao2) // funcao aplica um AND nas duas solucoes solicitadas e retorna o inteiro equivalente;
{
	return andBinario(solucao1, solucao2);
}



unsigned short mutacaoSimples(unsigned short solucao)          // funcao testa o bit na posicao 9, se tiver ligado ela desliga o bit e retorn a nova solucao, se estiver desligado ele liga o bit e retorna a slucao equivalente;
{
	int posicao_bit = 9;
	if (testarBit(solucao, posicao_bit) == true)         // teste do bit na posicao, e aplicaçao das funcoes;
	{
		solucao = desligarBit(solucao, posicao_bit);
	}
	else
	{
		solucao = ligarBit(solucao, posicao_bit);
	}

	return solucao;

}



unsigned short mutacaoDupla(unsigned short solucao)          // funcao testa os bits nas posicoes 3 e 12, se estiverem ligados ela desliga os bits e retorna a nova solucao, se estiverem desligados ela liga os bits e retorna a solucao equivalente;
{
	int posicao_bit1 = 3;
	int posicao_bit2 = 12;
	if (testarBit(solucao, posicao_bit1) == true)         // teste do bit na posicao, e aplicaçao das funcoes;          
	{
		solucao = desligarBit(solucao, posicao_bit1);
	}
	else
	{
		solucao = ligarBit(solucao, posicao_bit1);
	}

	if (testarBit(solucao, posicao_bit2) == true)         // teste do bit na posicao, e aplicaçao das funcoes;
	{
		solucao = desligarBit(solucao, posicao_bit2);
	}
	else
	{
		solucao = ligarBit(solucao, posicao_bit2);
	}

	return solucao;

}