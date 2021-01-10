#include<stdio.h>

int main(){
   int nota[10] ;
   char gabarito[10], resposta;
   int i=0,a;
   
   
   printf("Digite o gabarito da prova: ");
   for(i=0;i<10;i++){
      scanf(" %c",&gabarito[i]);
      } 
   
   
   printf("Digite o numero de alunos: ");
   scanf(" %i",&a);
   for(i=0; i<a ;i++){
      printf("Digite as respostas do aluno %i: ",i+1);
      int j=0,cont=0;
      for(j=0;j<10;j++){
         scanf(" %c",&resposta);
         if(resposta==gabarito[j]){
            cont++;
         }
      nota[i]=cont;
      }
   }   
   printf("**********\n");
   printf("Resultado: \n");
   printf("**********\n");
   for(i=0;i<a;i++){
      printf("Aluno %i: %i\n",i+1,nota[i]);
   }
}   
      
