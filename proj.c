/* PROJETO 1 DE PROJETO E ANÁLISE DE ALGORIMOS

INTEGRANTES: 

	- Anderson Correa Nicodemo		| 3228567-1
	- Felipe do Nascimento Fonseca	| 4221536-6
	- Gustavo Garabetti Munhoz		| 4221195-6

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "./Aux_Libraries/Aluno.h"
#include "./Aux_Libraries/IO-functions.h"
#include "./Aux_Libraries/Comparation-methods.h"
#include "./Aux_Libraries/Merge-Sort.h"
#include "./Aux_Libraries/Menu.h"
#define MAX_SIZE 150

int main(){
	FILE *input, *output;

	input = fopen(INPUT, "r");

	if(input == NULL){
		printf("Erro ao tentar abrir o arquivo.\n");
		return -1;
	}

	int n_lines = 0;
	char* line = (char*)calloc(MAX_SIZE, sizeof(char));

	while(!feof(input)){
		fgets(line, MAX_SIZE, input);
		n_lines++;
	}
	fclose(input);

	aluno* lista = (aluno*)calloc(n_lines, sizeof(aluno));

	entrada(input, lista);

	Menu(lista, n_lines);

	output = fopen(OUTPUT, "w");

	saida(lista, n_lines, output);

	fclose(output);

	free(line);
	free(lista);

	return 0;
}