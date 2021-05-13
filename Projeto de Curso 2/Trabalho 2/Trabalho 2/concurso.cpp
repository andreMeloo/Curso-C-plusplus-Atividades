#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cmath>
#include <cstring>
#include "concurso.h"


using namespace std;

int operator-(horario h1, horario h2)   // Funcao para conseguir com que o tipo registro Horario seja subtra�d, retornando a diferen�a em minutos
{
	int temp_minutos = 0;            // variavel para guardar a diferen�a em minutos
	if (h2.hora == h1.hora)      // primeiro if considera a diferen�a de tempo est� na mesma hora e da a diferen�a em minutos
	{
		temp_minutos = h1.minuto - h2.minuto;
	}
	else if (h1.hora > h2.hora && h1.minuto >= h2.minuto)        // segundo if considera a hora final sendo maior e minuto final sendo maior ou igual ao inicial
	{
		temp_minutos = 60 * (h1.hora - h2.hora) + (h1.minuto - h2.minuto);  // sendo o minuto final maior ou igual o inicial, basta somar esse a valor(diferen�a do final - inicial) a 60(valor de 1 hora) multiplicado pela diferen�a de horas
	}
	else if (h1.hora > h2.hora && h1.minuto < h2.minuto)        // terceiro if considera a hora final sendo maior e minuto final sendo menor que o inicial
	{
		temp_minutos = 60 * (h1.hora - h2.hora) - (h2.minuto - h1.minuto);   // sendo o minuto final menor que inicial, basta subtrair esse valor(diferen�a do inical - final) a 60(valor de 1 hora) multiplicado pela diferen�a de horas
	}

	return temp_minutos;      // retornando valor em minutos;

}

ostream& operator<<(ostream& mostra, horario &h)  // Funcao para que o tipo registro Horario seja mostrado por cout
{
	mostra << setfill('0') << setw(2) << h.hora << ':' << setfill('0') << setw(2) << h.minuto;

	return mostra;
}

istream& operator>>(istream& ler, horario& h)   // Funcao para que o tipo registro Horario seja lido pelo cin
{
	ler >> h.hora;
	ler.get();      // um get para pegar os : digitado pelo usu�rio
	ler >> h.minuto;
	ler.ignore();

	return ler;
}

void resumoParticipante(questoes qst_Concurso[], int qnt_questoes)    // Fun��o para exibi��o do resumo por participantes
{
	char letra = 65;    // vari�vel char referente ao caractere 'A', que � a letra inicial para as quest�es

	/* Nesse la�o, com o vetor din�mico de quest�es recebido o la�o vai percorrer o vetor a partir do local ao qual ele foi dado
	at� o n�mero de quest�es existentes e exibilas */

	for (int i = 0; i < qnt_questoes; i++)
	{
		cout << '\t' << char(letra + i) << " (" << qst_Concurso[i].grau_questoes << ") " << qst_Concurso[i].inicio << " �s " << qst_Concurso[i].fim << " (" << qst_Concurso[i].fim - qst_Concurso[i].inicio << " min)" << endl;
	}
}

void resumoQuestoes(participantes ptc_Concurso[], int qnt_participantes, int qnt_questoes, int qual_questao)   // Funcao para exibi��o do resumo por quest�es
{
	
	for (int i = 0; i < qnt_participantes; i++)
	{
		/* Nesse laco, com o vetor dinamico de participantes recebido o la�o vai percorer a partir do primeiro participante at� o ultimo
		mostrando na tela a respectiva quest�o pedida */
		cout << '\t' << ptc_Concurso[i].nome << " (" << ptc_Concurso[i].ptrQuestoes_participantes[qual_questao].grau_questoes << ") "
			<< ptc_Concurso[i].ptrQuestoes_participantes[ qual_questao].inicio << " �s " << ptc_Concurso[i].ptrQuestoes_participantes[ qual_questao].fim
			<< " (" << ptc_Concurso[i].ptrQuestoes_participantes[qual_questao].fim - ptc_Concurso[i].ptrQuestoes_participantes[qual_questao].inicio << " min)" << endl;
	}
}


media mediasConcurso(questoes qst_Concurso[], int tam_Vet, int indice, int passo)  // Funcao para calculo de medias do concurso
{
	media temp;       // uma vari�vel do tipo media temporaria
	float soma = 0;   // variavel pra guardar a soma
	for (int i = indice; i < tam_Vet; i += passo)     // la�o respons�vel por somar todos os valores do grau de dificuldade do numero de quest�es e as quest�es selecionadas
	{
		soma += qst_Concurso[i].grau_questoes;
	}
	temp.media_grau = soma / (tam_Vet / passo);    // o campo media_grau salva o valor da soma dividido pelo numero de participantes ja que cada quest�o se repte 1 vez por participante(no caso da media total vai ser manipulado propositalmente para que seja dividido os valores totais)
	soma = 0;
	for (int i = indice; i < tam_Vet; i += passo)
	{
		soma += (qst_Concurso[i].fim - qst_Concurso[i].inicio);
	}
	temp.media_tempo = soma / (tam_Vet / passo); // o campo media_tempo salva o valor da soma dividido pelo numero de participantes ja que cada quest�o se repte 1 vez por participante(no caso da media total vai ser manipulado propositalmente para que seja dividido os valores totais)
	soma = 0;

	return temp; // retornando a varialvel do tipo media
}

void separador(char caracter, int num)  // Funcao para calcular o tamnho dos separadores
{
	for (int i = 0; i < num; i++)
	{
		cout << caracter;
	}
	cout << '\n';
}