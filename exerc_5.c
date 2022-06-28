#include <stdio.h>
int ehPrimo(int num){
	int div;
	for(div=2;div<num;div++){
		if(num%div==0)
		return 0;
	}//fim for
	return 1;	
}//fim funcao
//---------------------
int main(){
	int num, continua;
	while (1){
		  printf("Entre com um numero:");
		  scanf("%d",&num);
		if(ehPrimo(num)==1)
		  printf("%d eh primo!\n",num);
		else
		  printf("%d nao e primo\n",num);
		  printf("Continua?[1-Sim | 0-Nao]");
		  scanf("%d",&continua);
	}while(continua==1);//fim while infinito
	return 0;
}
