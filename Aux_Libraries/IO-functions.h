#define MAX_SIZE 150

const char INPUT[] = "./IO-archives/entrada.csv", OUTPUT[] = "./IO-archives/saida.csv";

void entrada(FILE* input, aluno* lista){
	input = fopen(INPUT, "r");

	char* line = (char*)calloc(MAX_SIZE, sizeof(char));
	char* buffer = (char*)calloc(MAX_SIZE, sizeof(char));

	while(!feof(input)){
		fgets(line, MAX_SIZE, input);

		lista->semestre = (int)(*line-'0');
		lista->turma = *(line+2);
		lista->periodo = *(line+4);
		
		int j = 6;
		while(*(line+j) != ','){
			*buffer = *(line+j);
			buffer++, j++;
		}
		*buffer = '\0';
		buffer -= ++j-7;

		strcpy(lista->nome, buffer);

		int k = j;
		while(*(line+j) != ','){
			*buffer = *(line+j);
			buffer++; j++;
		}
		*buffer = '\0';
		buffer -= j-k;

		strcpy(lista->disciplina, buffer);

		lista->media = (double)((int)(*(line+j+1)-'0') + (int)(*(line+j+3)-'0')/10.0);

		lista++;
	}
}

void saida(aluno* vetor, int tamanho, FILE *output){
    fprintf(output, "SEMESTRE,TURMA,PERIODO,NOME,DISCIPLINA,MEDIA\n");
	int i = 0;
	while(i < tamanho){
        fprintf(output, "%d,", vetor->semestre);
		fprintf(output, "%c,", vetor->turma);
		fprintf(output, "%c,", vetor->periodo);
		fprintf(output, "%s,", vetor->nome);
		fprintf(output, "%s,", vetor->disciplina);
		fprintf(output, "%.1f\n", vetor->media);
		i++; vetor++;
	}
	printf("\n             Lista de alunos ordenada com sucesso!\n\n");
}