//Biblioteca do menu
const char MENU[] = "./Secundary_archives/menu.txt"; //O menu foi configurado através de um txt

void Menu(aluno* lista, int tam){ //Realiza a leitura do arquivo de menu e imprime na tela do usuario
	int resp = 0;

	while(resp < 1 || resp > 5){
		FILE *arq;

		arq = fopen(MENU, "r");

		if(NULL == arq) return;

		while(!feof(arq)){
			char line[MAX_SIZE];
			if(NULL != fgets(line, MAX_SIZE, arq)) printf("%s", line);
		}

		fclose(arq);
	
		scanf("%d", &resp); //Guarda a resposta dada pelo usuario
		switch(resp){ //Passa os parametros de acordo com a ordenação desejada
			case 1:
				MergeSort(lista, tam, by_name);
				break;
			case 2:
				MergeSort(lista, tam, by_sem);
				break;			
			case 3:
				MergeSort(lista, tam, by_all);
				break;
			case 4:
				MergeSort(lista, tam, by_mean);
				break;
			case 5:
				MergeSort(lista, tam, by_all_v2);
				break;
			
			default: //Se digitou invalido, apresenta para o usuario digitar novamente
				printf("Valor inválido, por favor digite novamente: ");
		}
	}
}
