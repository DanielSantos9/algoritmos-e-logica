#include <stdio.h>

int main (){
	//Calculaora de media simles
	#define texto "Calcule a media simples entre dois valores."
	float numb1, numb2, media;
	
	printf("%s\n", texto);
	
	printf("Digite o primeiro valor: \n");
	scanf("%f", &numb1);
	
	printf("Digite o segundo valor: \n");
	scanf("%f", &numb2);
	
	media = (numb1 + numb2) / 2;
	
	printf("A media entre os dois valores e: %f", media);
}
