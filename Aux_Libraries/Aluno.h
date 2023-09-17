//Biblioteca que define a Struc Aluno
#include <stdbool.h>
//Define o tamanho maximo do vetor de caracteres como 150
#define MAX_SIZE 150

struct Aluno{ //Estrutura Aluno
	int semestre;
	char turma, periodo, nome[MAX_SIZE], disciplina[MAX_SIZE];
	double media;
};

typedef struct Aluno aluno; //Coloca a estrutura aluno como typedef para otimizar o algortimo de busca

bool isEqual(aluno a, aluno b){ //Compara se aluno a é igual a aluno b
	bool ans = a.semestre == b.semestre; //Usa ans para otimização de linhas no código
	ans &= a.turma == b.turma;
	ans &= a.periodo == b.periodo;
	ans &= strcmp(a.nome, b.nome) == 0;
	ans &= strcmp(a.disciplina, b.disciplina) == 0;
	ans &= a.media == b.media;
	return ans;
}
