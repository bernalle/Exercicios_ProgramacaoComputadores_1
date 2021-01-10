#include<stdio.h>
#include<stdlib.h>

int main(){	 
	float fabrica,dist,imposto,comp;
	printf("Digite o custo de fabrica do carro: ");
	scanf("%f",&fabrica);
	dist=0.28*fabrica;
	imposto=0.45*fabrica; 
	comp=fabrica+dist+imposto;
	printf("\nCusto ao consumidor: %.2f\n",comp);
}
