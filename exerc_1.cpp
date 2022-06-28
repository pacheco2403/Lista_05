#include <stdio.h>

int ehpar(int num){
	int div;
	for (div=2;div<num;div++){
	if (num%div==0)
	return 1;
	}
}

int main(){
	int num, continua;
	do{
		printf("Entre com um numero: ");
		scanf("%d", &num);
		if(ehpar(num)==1)
		printf ("%d eh par!\n", num);
		else 
		printf ("%d Nao eh par \n", num);
		printf("Continua?\n 1: SIM \n 2: NAO\n");
		scanf("%d", &continua);
	
	}while(continua==1);
	
}
