#include <stdbool.h>
#define MAX_SIZE 150 //Define o tamanho maximo do vetor de caracteres como 150

struct Aluno{ //Estrutura Aluno
	int semestre;
	char turma, periodo, nome[MAX_SIZE], disciplina[MAX_SIZE];
	double media;
};

typedef struct Aluno aluno; //Renomeia a struct Aluno para simplificar a escrita de código

bool isEqual(aluno a, aluno b){ //Compara se aluno a é igual a aluno b
	bool ans = a.semestre == b.semestre; //Usa ans para facilitar a escrita
	ans &= a.turma == b.turma; // &= é um operador binário AND
	ans &= a.periodo == b.periodo;
	ans &= strcmp(a.nome, b.nome) == 0;
	ans &= strcmp(a.disciplina, b.disciplina) == 0;
	ans &= a.media == b.media;
	return ans; // Se tudo for igual, então ans = 1, se não ans = 0;
}
