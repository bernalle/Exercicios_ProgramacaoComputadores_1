#include<stdio.h>
#include<string.h>


void palindromo(char string[]){
	char invertida[46];	
	int i=0,cont=0,j=(strlen(string)-1);
	int igual;
	cont=strlen(string);
	for(i=0;i<cont;i++,j--){
		invertida[i]=string[j];
	}
	invertida[strlen(string)]='\0';
	igual=strcmp(string,invertida);
	if(igual==0)
		printf("Sim.");
	else
		printf("Nao.");

}
int main(){
	char string[46];	
	printf("Digite uma palavra: ");
	scanf("%s",string);
	palindromo(string);
}
