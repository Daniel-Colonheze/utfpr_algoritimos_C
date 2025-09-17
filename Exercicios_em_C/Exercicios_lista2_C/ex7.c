#include <stdio.h> 

int main(){
	int anoNasc, anoAtual;
	printf("Digite seu ano de nascimento: ");
	scanf("%i", &anoNasc);
	printf("Digite o ano atual em que voce esta: ");
	scanf("%i", &anoAtual);
	printf("Sua provavel idade e : %i", anoAtual - anoNasc);
return 0;
}
