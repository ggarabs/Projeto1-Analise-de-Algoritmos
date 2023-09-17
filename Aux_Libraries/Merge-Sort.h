//Biblioteca MergeSort realiza a ordenação, este foi o metódo escolhido para ordenação

typedef aluno (*Comparador)(aluno, aluno); //Passa o ponteiro do comparador toda vez que é realizado uma nova compração para poupar o uso do MergeSort

void MergeSort(aluno* vetor, int tam, Comparador mtd){ //Função MergeSort
	//Realiza a ordenação por meio de divisões no vetor 1 e 2
    if (tam <= 1) return;

    int meio = tam / 2;

	aluno* vetor1 = (aluno*)calloc(meio+1, sizeof(aluno));
	aluno* vetor2 = (aluno*)calloc(meio+1, sizeof(aluno));

    for (int i = 0; i < meio; i++) *(vetor1+i) = *(vetor+i);
    for (int i = meio; i < tam; i++) *(vetor2+i-meio) = *(vetor+i);

    MergeSort(vetor1, meio, mtd);
  	MergeSort(vetor2, tam-meio, mtd);

    int p1 = 0, p2 = meio;

    while (p1 < meio && p2 < tam){
        if (isEqual(mtd(*vetor1, *vetor2), *vetor1)){
            *vetor = *vetor1;
			vetor1++;
			p1++;
        } 
        else{
            *vetor = *vetor2;
			vetor2++;
			p2++;
        }
		vetor++;
    }

    while (p1 < meio){
        *vetor = *vetor1;
		vetor++;
		vetor1++;
        p1++;
    }

    while (p2 < tam){
        *vetor = *vetor2;
		vetor2++;
		vetor++;
        p2++;
    }
}
