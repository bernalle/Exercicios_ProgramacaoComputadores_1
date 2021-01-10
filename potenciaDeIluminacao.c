#include<stdio.h>
#include<stdlib.h>

int main(){
   float largura,comprimento,potencia;
   printf("Digite a largura e o comprimento em metros: ");
   scanf("%f %f",&largura,&comprimento);
   puts("");
   potencia=(largura*comprimento)*18;
   printf("Potencia = %.2f\n",potencia);
}
