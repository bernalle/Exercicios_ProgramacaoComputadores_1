#include<stdio.h>
	int main(){
	int a,conta=1,media=0,soma=0;
	printf("Digite os numeros inteiros positivos: "); 
	scanf("%i ",&a);
	if(a>=0){	
		while(a>0){
			soma=soma+a;
			media=soma/conta;
	   	scanf("%i",&a);
			conta++;	
		}
	}
	printf("Resultado = %i\n",media);
}		



	
