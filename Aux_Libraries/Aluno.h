#include <stdbool.h>
#define MAX_SIZE 150

struct Aluno{
	int semestre;
	char turma, periodo, nome[MAX_SIZE], disciplina[MAX_SIZE];
	double media;
};

typedef struct Aluno aluno;

bool isEqual(aluno a, aluno b){
	bool ans = a.semestre == b.semestre;
	ans &= a.turma == b.turma;
	ans &= a.periodo == b.periodo;
	ans &= strcmp(a.nome, b.nome) == 0;
	ans &= strcmp(a.disciplina, b.disciplina) == 0;
	ans &= a.media == b.media;
	return ans;
}