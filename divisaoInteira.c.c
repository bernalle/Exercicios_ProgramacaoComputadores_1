#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1,n2,n3,n4;

	printf("Digite dois numeros inteiros (o segundo diferente de zero): "); 	
	scanf("%i %i",&n1,&n2);
	n3=n1/n2;	
	n4=n1%n2;
	printf("\na.  Dividendo: %i",n1);
	printf("\nb.  Divisor: %i",n2);
	printf("\nc.  Quociente: %i",n3);
	printf("\nd.  Resto: %i\n",n4);
}
