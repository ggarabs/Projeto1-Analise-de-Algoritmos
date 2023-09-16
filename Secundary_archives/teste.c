#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void remove_acentos(char* nome, int tam){
	printf("%s\n", nome);
	char acentuacoes[] = "áàâãäéèêëíìîïóòôõöúùûüçÁÀÂÃÄÉÈÊËÍÌÎÏÓÒÔÕÖÚÙÛÜÇ";

	for(int i = 0; i < strlen(acentuacoes); i++) printf("%c ", acentuacoes[i]);
	printf("\n");

	char corrigido[] = "aaaaaeeeeiiiiooooouuuucAAAAAEEEEIIIIOOOOOUUUUC";
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < strlen(acentuacoes); j++){
			if(*(nome+i) == acentuacoes[j]){
				printf("%c %c %d %d ", *(nome+i), acentuacoes[j], j, i);
				*(nome+i) = corrigido[j];
				printf("%c\n", *(nome+i));
				break;
			}
		}
	}
	printf("%s\n", nome);
}

int main(){
	setlocale(LC_ALL, "UTF-8");
	char nome[] = "Aápeéêõnfjs";
	remove_acentos(nome, strlen(nome));
	return 0;
}