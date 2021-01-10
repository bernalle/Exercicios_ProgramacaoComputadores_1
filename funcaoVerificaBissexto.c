#include<stdio.h>

int VerificaBissexto(int ano); 

int main(){
    int a;
    printf("Digite o ano: "); 
    scanf("%d",& a);
    printf("Resultado = %d\n",VerificaBissexto(a));
}
int VerificaBissexto(int ano){
    if((ano%4==0 && ano%100!=0) || (ano%400==0))
        return 1;
    else
        return 0;
}
