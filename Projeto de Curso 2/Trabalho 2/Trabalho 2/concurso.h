#include <iostream>
#include <Windows.h>

using namespace std;

// Registros a serem usados

struct horario      // Registro pra guardar o horário das questões
{
	int hora;
	int minuto;
};

struct questoes    // Registro pra guardar as questões e suas informações
{
	float grau_questoes;
	horario inicio;
	horario fim;
};

struct media    // Registro pra guardar os dados pra calculo de medias
{
	float media_grau;
	float media_tempo;
};

struct participantes     // Registros de participantes, com um ponteiro que aponta para o registro questões 
{
	char nome[20];
	questoes* ptrQuestoes_participantes;
};


// Funções do programa

void resumoParticipante(questoes[], int);    // Função para exibição do resumo por participantes
void resumoQuestoes(participantes[], int, int, int);   // Funcao para exibição do resumo por questões
media mediasConcurso(questoes[], int, int, int);  // Funcao para calculo de medias do concurso
void separador(char, int);  // Funcao para calcular o tamnho dos operadores

int operator-(horario, horario);   // Funcao para conseguir com que o tipo registro Horario seja subtraíd, retornando a diferença em minutos
ostream& operator<<(ostream& , horario&);  // Funcao para que o tipo registro Horario seja mostrado por cout
istream& operator>>(istream&, horario&);   // Funcao para que o tipo registro Horario seja lido pelo cin
