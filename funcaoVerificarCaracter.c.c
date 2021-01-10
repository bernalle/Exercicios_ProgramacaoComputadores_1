#include<stdio.h>

int VerificaLetra(char c); 
    
int main(){
    char a;
    printf("Digite um caracter: "); 
    scanf(" %c",&a);
    printf("Resultado = %d\n",VerificaLetra(a));
}
int VerificaLetra(char c)
{
    if(((c>='a') && (c<= 'z')) || ((c>= 'A') && (c<='Z'))){
        return 1;
    }
    else 
        return 0;
}
    
