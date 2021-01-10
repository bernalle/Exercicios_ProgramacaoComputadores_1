#include<stdio.h> 

double Determinante3x3(float mat[][3]){

	float det, det1, det2;
	
	det = (mat[0][0] * mat[1][1] * mat[2][2]) + (mat[0][1] * mat[1][2] * mat[2][0]) + (mat[0][2] * mat[1][0] * mat[2][1]);
	det1= (mat[0][2] * mat[1][1] * mat[2][0]) + (mat[0][0] * mat[1][2] * mat[2][1]) + (mat[0][1] * mat[1][0] * mat[2][2]);

    det2 = det - (det1);

    return det2;
}

int main(){
	
	float matriz[3][3];
	int i , j;
	
	printf("Digite os numeros da matriz:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%f",&matriz[i][j]);
		}
	}
	
	printf("Resultado = %.1f\n", Determinante3x3(matriz));
}
