#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cmath>
#include <cstring>
#include "concurso.h"



using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	const char carac_para_qst = 65;        // variavel predefinida para representar os nomes das quest�es - 65 na tabela ASCII � equivalente a 'A'
	             // Uma v�riavel posicao criada para se manipular algumas posi��es de vetores e ponteiros de vetores de registros

	separador('*', 55);
	cout << "Concurso de Programa��o\n\n";

	cout << "Qual n�mero de participantes? ";
	int num_participantes = 0;
	cin >> num_participantes;               // programa grava o numero de participantes

	cout << "Qual o n�mero de quest�es? ";
	int num_questoes = 0;
	cin >> num_questoes;                   // programa grava o numero de quest�es
	cin.get();   // cin.get para capturar o \n deixado e assim o proximo cin do programa n�o ser interferido
	questoes * questoes_concurso = new questoes[num_questoes * num_participantes];              // cri��o do vetor din�mico de quest�es
	participantes* participantes_concurso = new participantes[num_participantes];				// Cria��o do vetor dinamico de participantes
	
	// O codigo abaixo vai gravar o endere�o de onde est� a primeira quest�o de cada participante

	
	for (int i = 0, j = 0; i < num_participantes; i++, j += num_questoes)        // Aqui o la�o ir� percorer todos os participantes e gravar o endere�o da primeira quest�o no campo ptrQuest�es_participantes(que � um ponteiro apontando pro Registro questoes)
	{
		participantes_concurso[i].ptrQuestoes_participantes = &questoes_concurso[j];
	}

	cout << "\n";
	separador('*', 55);

	// Parte do codigo respons�vel por guardar os valores vindos do usu�rio

	for (int i = 0, posicao = 0; i < num_participantes; i++, posicao += num_questoes)     // Esse la�o ser� respons�vel por percorer todos os participantes e gravar as informa��es vindas do usu�rio
	{
		separador('-', 13);
		cout << "Participante: ";
		cin.getline(participantes_concurso[i].nome, 20);   // lendo o nome do participante 
		separador('-', 13);
		char temp_char = carac_para_qst; // uma vari�vel temporaria guardando o caractere inicial das quest�es
		for (int x = 0; x < num_questoes; x++, temp_char++)      // Esse la�o guardar� todas as quest�es do usu�rio atual selecionado dentro do primeiro la�o(aqui h� um incremento do temp char pra que o caractere v� sendo alterado)
		{
			cout << "Quest�o " << char(temp_char) << endl;
			cout << "\tDificuldade: ";
			cin >> questoes_concurso[x + posicao].grau_questoes;
			cout << "\tIn�cio: ";
			cin >> questoes_concurso[x + posicao].inicio;
			cout << "\tFim: ";
			cin >> questoes_concurso[x + posicao].fim;
		}
		separador('-', 13);
		cout << '\n';
	}
	separador('*', 55);
	
	// Resumo por Participante

	separador('-', 23);
	cout << "Resumo por Participante" << endl;
	separador('-', 23);
	for (int i = 0, posicao = 0; i < num_participantes; i++, posicao += num_questoes)   // nesse la�o for ir� mostrar o resumo por participantes
	{	
		cout << participantes_concurso[i].nome << ':' << endl;
		resumoParticipante((questoes_concurso + posicao), num_questoes);   // funcao de resumo dos participantes recebendo o vetor de quest�es e sua respectiva posicao que deve iniciar a impress�o na tela;
	}
	separador('-', 18);
	cout << '\n';

	// Resumo por Quest�es

	separador('-', 18);
	cout << "Resumo por Quest�o" << endl;
	separador('-', 18);
	char temp_char = carac_para_qst;    // cria��o de uma vari�vel temporaria para armazenar o caractere inicial do nome das quest�es
	for (int i = 0; i < num_questoes; i++)    // Esse la�o � respons�vel por percorer todos os participantes e mostrar a respectiva quest�o escolhida e seu resumo
	{
		cout << "Quest�o " << char(temp_char + i) << ':' << endl;
		resumoQuestoes(participantes_concurso, num_participantes, num_questoes, i);     // funcao de resumo de questoes, ela recebe o vetor de participantes, a quantidade de participantes, o numero de questoes por participantes, e o valor do indice
	}
	separador('-', 18);
	cout << '\n';

	// Estat�sticas do programa

	separador('-', 12);
	cout << "Estatisticas" << endl;
	separador('-', 12);
	media media_questoes;      // variavel do tipo media criada para armazenar as medias
	for (int i = 0; i < num_questoes; i++)         // esse la�o usar� da funcao mediaConcurso para calcular as media salvar na variavel media_questoes e mostr�-las logo ap�s, at� percorer todas as quest�es ao qual foi solicitada
	{
		media_questoes = mediasConcurso(questoes_concurso, (num_questoes * num_participantes), i, num_questoes);
		cout << fixed << setprecision(2) << "Questao " << char(carac_para_qst + i) << ':' << " Dificuldade (" << media_questoes.media_grau << ") - Tempo (" << media_questoes.media_tempo << " minutos)" << endl;
	}
	media_questoes = mediasConcurso(questoes_concurso, (num_questoes * num_participantes), 0, 1);
	cout << fixed << setprecision(2) << "Concurso: " << "Dificuldade (" << media_questoes.media_grau << ") - Tempo (" << media_questoes.media_tempo << " minutos)" << endl;

	delete[] questoes_concurso;
	delete[] participantes_concurso;

 	}