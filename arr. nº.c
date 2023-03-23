#include <stdio.h>
#include <stdlib.h>

int main(){
	#define texto "Arredonde numeros"
	float number = 0;
	
	printf("%s.\n", texto);
	
	printf("Digite o numero:\n");
	scanf("%f", &number);
	
	printf("O numero arrendondado e: %2.f\n", number);
	
	system("pause");
}
