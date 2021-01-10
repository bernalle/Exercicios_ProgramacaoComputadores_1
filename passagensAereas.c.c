#include<stdio.h>
int main(){
int o,d;
float m[5][5]= {{0,115.00,133.50,499.00,402.90},
                {115.00,0,90.00,390.00,200.00},
                {133.50,90.00,0,350.00,200.00},
                {499.00,390.00,350.00,0,180.00},
                {402.90,200.00,200.00,180.00,0}};
char letra;
printf("Voe Bem\n\n");
printf("1. Belo Horizonte\n");
printf("2. Sao Paulo\n");
printf("3. Rio de Janeiro\n");
printf("4. Manaus\n");
printf("5. Brasilia\n\n");
printf("Digite a cidade de origem: ");
scanf("%d",&o);
printf("Digite a cidade de destino: ");
scanf("%d",&d);
printf("\nA. Ida e volta");
printf("\nB. Ida\n");
printf("\nDigite a opcao: ");
scanf(" %c",&letra);
if(letra=='A'){
printf("\nValor total a pagar: R$ %.2f\n",m[o-1][d-1]*2);

}
if(letra=='B')
printf("\nValor total a pagar: R$ %.2f\n",m[o-1][d-1]);

}
