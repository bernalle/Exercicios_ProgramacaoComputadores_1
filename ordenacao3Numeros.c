#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,aux;
	printf("Digite tres numeros inteiros: ");
	scanf("%i%i%i",&a,&b,&c);
	if(a>b){
		aux=a;
		a=b;
		b=aux;
	}
	if(a>c){
		aux=a;
		a=c;
		c=aux;
	}
	if(b>c){
		aux=b;
		b=c;
		c=aux;
	}	
	printf("Ordem crescente: %i %i %i\n",a,b,c);
}
