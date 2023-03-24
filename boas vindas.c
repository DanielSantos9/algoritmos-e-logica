#include <stdio.h>
#define bv "boas vindas, "

int main(){
	char nome [50] = "";
	
	printf("Qual seu nome?\n");
	scanf("%s", &nome);
	printf("%s", bv);
	printf(nome);
	
}
