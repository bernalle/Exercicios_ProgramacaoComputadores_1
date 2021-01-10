#include<stdio.h>
int main(){
	int x,y,i,aux=1;
	printf("Digite dois numeros inteiros: "); 
	scanf("%d%d",&x,&y);
	for(i=0;i<y;i++){
		aux=aux*x;
	}
	printf("Resultado = %d\n",aux);
}
