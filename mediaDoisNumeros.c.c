#include<stdio.h>
#include<stdlib.h>

int main(){
   float a,b,c,d,e,media,soma;
   
   printf("Digite cinco numeros:\n");
   scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
   soma=a+b+c+d+e;
   media=soma/5;
   printf("\nResultado = %.2f\n", media);
}
