#include <stdio.h>
int ehprimo(int num){
	int div;
	for(div=2;div<num;div++){
		if(num%div==0)
			return 0;
	}//fim for
	return 1;
}
int main(){
	int num,soma=0, cont;
	printf("Entre com o numero ");
	scanf("%d",&num);
	for (cont=2;cont<=num;cont++){
	if(ehprimo(cont)==1)
		soma = soma+1;	
	printf("Existem %d",soma," nessa sequencia");
	}
	 return soma;
}
	
	

