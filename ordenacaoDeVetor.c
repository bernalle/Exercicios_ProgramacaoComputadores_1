#include<stdio.h>

void Ordenacao(int vet[]);

void Ordenacao(int vet[]){
    int i,j,aux;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(vet[i]>vet[j]){
				aux=vet[j];
				vet[j]=vet[i];
				vet[i]=aux;
			}
		}
	}
	printf("Vetor ordenado:");
    for(i=0;i<10;i++){
        printf(" %d",vet[i]);
    }
	printf("\n"); 
}

int main(){
    int i,vetor[11];      
    printf("Digite dez numeros inteiros: ");
    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    Ordenacao(vetor);
}









