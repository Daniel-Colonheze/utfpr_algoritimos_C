#include <stdio.h> 

int main(){
	int idade, anoAtual;
	printf("Digite a sua idade atual :");
	scanf("%i", &idade);
	printf("Digite o ano atual em que voce esta: ");
	scanf("%i", &anoAtual);
	printf("Voce provavelmente nasceu em: ", anoAtual - idade);
	return 0;
}
