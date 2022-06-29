#include <stdio.h>

int resultmedia(float freq, float n1, float n2, float n3){
	float media;
	media = (n1+n2+n3)/3;
}
	int main(){
	float media, freq;
	if ( media>= 6 && freq>= 75.0){
		printf("Aprovado");
		return 1;
    }
	else if (4>=media< 6 && freq>= 75.0){
		printf("Final");
		return 2;
	}
	else ( media <= 4 && freq <= 75){
		printf("Reprovado");
		return 3;
	}
}
