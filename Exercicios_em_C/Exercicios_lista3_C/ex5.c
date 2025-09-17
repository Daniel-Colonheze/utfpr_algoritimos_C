#include <stdio.h>
#include <math.h>

int main(){
	float SF, SE;
	int DEP;
	printf("Digite o seu salário da empresa: ");
	scanf("%f", &SE);
	printf("Digite a quantidade de dependentes que o você possui: ");
	scanf("%i", &DEP);
	SF = SE * (DEP * 0.02);
	printf("O salário família é de: %.2f", SF);
    return 0;
}
