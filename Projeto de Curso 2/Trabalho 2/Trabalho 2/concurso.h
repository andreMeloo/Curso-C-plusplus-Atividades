#include <iostream>
#include <Windows.h>

using namespace std;

// Registros a serem usados

struct horario      // Registro pra guardar o hor�rio das quest�es
{
	int hora;
	int minuto;
};

struct questoes    // Registro pra guardar as quest�es e suas informa��es
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

struct participantes     // Registros de participantes, com um ponteiro que aponta para o registro quest�es 
{
	char nome[20];
	questoes* ptrQuestoes_participantes;
};


// Fun��es do programa

void resumoParticipante(questoes[], int);    // Fun��o para exibi��o do resumo por participantes
void resumoQuestoes(participantes[], int, int, int);   // Funcao para exibi��o do resumo por quest�es
media mediasConcurso(questoes[], int, int, int);  // Funcao para calculo de medias do concurso
void separador(char, int);  // Funcao para calcular o tamnho dos operadores

int operator-(horario, horario);   // Funcao para conseguir com que o tipo registro Horario seja subtra�d, retornando a diferen�a em minutos
ostream& operator<<(ostream& , horario&);  // Funcao para que o tipo registro Horario seja mostrado por cout
istream& operator>>(istream&, horario&);   // Funcao para que o tipo registro Horario seja lido pelo cin
