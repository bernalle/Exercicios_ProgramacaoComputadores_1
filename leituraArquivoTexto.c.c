#include<stdio.h>
#include<string.h>

int main(){
	
	//Declaração da estrutura
	FILE *p;
	char nome[20],c;
	  
	//Abertura do arquivo
	printf("Digite o nome do arquivo: ");
	scanf("%s",nome);
	p= fopen(nome,"r");
	printf ("\n\n");
	if(!p) {
 		printf("Erro na abertura do arquivo.\n");
 		return 0;
 	}
 	//Ler o arquivo 	
 	c=fgetc(p);
 	while(!feof(p)){
 	 	  printf("%c",c);
 	 	  c=fgetc(p);
 	}
 	
 	//Fecha o arquivo
 	fclose(p);
 	return 0;
 }
	
	
	
	
	
	
