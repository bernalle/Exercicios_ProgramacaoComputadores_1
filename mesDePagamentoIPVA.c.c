#include<stdio.h>
int main(){
int placa;
printf("Digite os digitos da placa: ");
scanf("%d",&placa);
placa=placa%10;
switch(placa){
    case 1:printf("Mes do pagamento do IPVA: Janeiro");
                break;
    case 2:printf("Mes do pagamento do IPVA: Fevereiro");
                break;
    case 3:printf("Mes do pagamento do IPVA: Marco");
                break;
    case 4:printf("Mes do pagamento do IPVA: Abril");
                break;
    case 5:printf("Mes do pagamento do IPVA: Maio");
                break;
    case 6:printf("Mes do pagamento do IPVA: Junho");
                break;
    case 7:printf("Mes do pagamento do IPVA: Julho");
                break;
    case 8:printf("Mes do pagamento do IPVA: Agosto");
                break;
    case 9:printf("Mes do pagamento do IPVA: Setembro");
                break;
    case 0:printf("Mes do pagamento do IPVA: Outubro");
                break;
}

}
