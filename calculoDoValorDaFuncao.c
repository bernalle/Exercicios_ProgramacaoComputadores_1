#include<stdio.h>
#include<math.h>

int main(){
	int x,f;
	printf("Digite o valor de x: ");
	scanf("%i",&x);
	if(x<=1)
	f=1;
	if(x>1 && x<=2)
	f=2;
	if(x>2 && x<=3)
	f=(x*x);
	if(x>3)
	f=(x*x*x);
	printf("f(%i) = %i\n",x,f);
}
