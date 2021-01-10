#include<stdio.h>

int main(){
	char string[21];	
	int i=0;
	printf("Digite uma palavra com no maximo 20 letras: ");	
	scanf("%s",string);
	while(string[i]!='\0'){
		i++;
	}
	printf("\n\nQuantidade de letras: %d\n",i);
}
