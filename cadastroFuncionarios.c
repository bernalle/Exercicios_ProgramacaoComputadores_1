#include <stdio.h>

typedef struct{
   char nome[80];
   int code;
   float salario;
   char cargo[30];
}Funcionario;

void exibe(Funcionario f[20]){
    int i;

    printf("\n************************\nFuncionarios da empresa:\n************************\n");

    for(i=0;i<20;i++){
     printf("\nCodigo: %d\n",f[i].code);
     printf("Nome: %s", f[i].nome);
     printf("Salario: %.1f\n", f[i].salario);
     printf("Cargo: %s", f[i].cargo);
    }

}

int main(){
    int i;

    Funcionario f[20];

    for(i=0;i<20;i++){
         printf("Digite o codigo do funcionario: ");
           scanf("%d%*c", &f[i].code);
           getchar();
           printf("Digite o nome: ");
           fgets(f[i].nome,80,stdin);
           printf("Digite o salario: ");
           scanf("%f%*c",&f[i].salario);
           getchar();
           printf("Digite o cargo: ");
           fgets(f[i].cargo,30,stdin);
           printf("\n");
    }

    exibe(f);

}
