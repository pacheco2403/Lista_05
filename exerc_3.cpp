 #include <stdio.h>

		

 int fatorial (int num){
 	int cont, fat=1;
 	for (cont=1;cont<=num;cont++)
 		fat= fat * cont;
 		return fat;
 }

 
 	int main(){
 		int num;
 		printf("Entre com a fatorial: ");
 		scanf("%d", &num);
 		printf("%d",fatorial(num));
	
			}	
