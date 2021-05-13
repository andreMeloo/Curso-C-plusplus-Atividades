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

	const char carac_para_qst = 65;        // variavel predefinida para representar os nomes das questões - 65 na tabela ASCII é equivalente a 'A'
	             // Uma váriavel posicao criada para se manipular algumas posições de vetores e ponteiros de vetores de registros

	separador('*', 55);
	cout << "Concurso de Programação\n\n";

	cout << "Qual número de participantes? ";
	int num_participantes = 0;
	cin >> num_participantes;               // programa grava o numero de participantes

	cout << "Qual o número de questões? ";
	int num_questoes = 0;
	cin >> num_questoes;                   // programa grava o numero de questões
	cin.get();   // cin.get para capturar o \n deixado e assim o proximo cin do programa não ser interferido
	questoes * questoes_concurso = new questoes[num_questoes * num_participantes];              // crição do vetor dinâmico de questões
	participantes* participantes_concurso = new participantes[num_participantes];				// Criação do vetor dinamico de participantes
	
	// O codigo abaixo vai gravar o endereço de onde está a primeira questão de cada participante

	
	for (int i = 0, j = 0; i < num_participantes; i++, j += num_questoes)        // Aqui o laço irá percorer todos os participantes e gravar o endereço da primeira questão no campo ptrQuestões_participantes(que é um ponteiro apontando pro Registro questoes)
	{
		participantes_concurso[i].ptrQuestoes_participantes = &questoes_concurso[j];
	}

	cout << "\n";
	separador('*', 55);

	// Parte do codigo responsável por guardar os valores vindos do usuário

	for (int i = 0, posicao = 0; i < num_participantes; i++, posicao += num_questoes)     // Esse laço será responsável por percorer todos os participantes e gravar as informações vindas do usuário
	{
		separador('-', 13);
		cout << "Participante: ";
		cin.getline(participantes_concurso[i].nome, 20);   // lendo o nome do participante 
		separador('-', 13);
		char temp_char = carac_para_qst; // uma variável temporaria guardando o caractere inicial das questões
		for (int x = 0; x < num_questoes; x++, temp_char++)      // Esse laço guardará todas as questões do usuário atual selecionado dentro do primeiro laço(aqui há um incremento do temp char pra que o caractere vá sendo alterado)
		{
			cout << "Questão " << char(temp_char) << endl;
			cout << "\tDificuldade: ";
			cin >> questoes_concurso[x + posicao].grau_questoes;
			cout << "\tInício: ";
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
	for (int i = 0, posicao = 0; i < num_participantes; i++, posicao += num_questoes)   // nesse laço for irá mostrar o resumo por participantes
	{	
		cout << participantes_concurso[i].nome << ':' << endl;
		resumoParticipante((questoes_concurso + posicao), num_questoes);   // funcao de resumo dos participantes recebendo o vetor de questões e sua respectiva posicao que deve iniciar a impressão na tela;
	}
	separador('-', 18);
	cout << '\n';

	// Resumo por Questões

	separador('-', 18);
	cout << "Resumo por Questão" << endl;
	separador('-', 18);
	char temp_char = carac_para_qst;    // criação de uma variável temporaria para armazenar o caractere inicial do nome das questões
	for (int i = 0; i < num_questoes; i++)    // Esse laço é responsável por percorer todos os participantes e mostrar a respectiva questão escolhida e seu resumo
	{
		cout << "Questão " << char(temp_char + i) << ':' << endl;
		resumoQuestoes(participantes_concurso, num_participantes, num_questoes, i);     // funcao de resumo de questoes, ela recebe o vetor de participantes, a quantidade de participantes, o numero de questoes por participantes, e o valor do indice
	}
	separador('-', 18);
	cout << '\n';

	// Estatísticas do programa

	separador('-', 12);
	cout << "Estatisticas" << endl;
	separador('-', 12);
	media media_questoes;      // variavel do tipo media criada para armazenar as medias
	for (int i = 0; i < num_questoes; i++)         // esse laço usará da funcao mediaConcurso para calcular as media salvar na variavel media_questoes e mostrá-las logo após, até percorer todas as questões ao qual foi solicitada
	{
		media_questoes = mediasConcurso(questoes_concurso, (num_questoes * num_participantes), i, num_questoes);
		cout << fixed << setprecision(2) << "Questao " << char(carac_para_qst + i) << ':' << " Dificuldade (" << media_questoes.media_grau << ") - Tempo (" << media_questoes.media_tempo << " minutos)" << endl;
	}
	media_questoes = mediasConcurso(questoes_concurso, (num_questoes * num_participantes), 0, 1);
	cout << fixed << setprecision(2) << "Concurso: " << "Dificuldade (" << media_questoes.media_grau << ") - Tempo (" << media_questoes.media_tempo << " minutos)" << endl;

	delete[] questoes_concurso;
	delete[] participantes_concurso;

 	}