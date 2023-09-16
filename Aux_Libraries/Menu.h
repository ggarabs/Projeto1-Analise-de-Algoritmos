const char MENU[] = "./Secundary_archives/menu.txt";

void Menu(aluno* lista, int tam){
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
	
		scanf("%d", &resp);
		switch(resp){
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
			
			default:
				printf("Valor inválido, por favor digite novamente: ");
		}
	}
}