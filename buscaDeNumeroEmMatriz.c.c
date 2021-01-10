#include<stdio.h>

int main(){
    int matriz[3][3],l[9],c[9],x,i,j,cont=-1;
    printf("Digite os numeros da matriz:\n"); 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%i",&matriz[i][j]);           
        }
    }
    
    printf("Digite o numero a ser procurado:\n");
    scanf("%i",&x);
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j]==x){
                cont++;
                l[cont]=i;
                c[cont]=j;
            }
        }
    }
    
    printf("Repeticoes: %i\n",cont+1);
    printf("Posicoes:\n");
    for(i=0;i<=cont;i++){
        printf("(%i, %i)\n",l[i],c[i]);
    }
}
    
