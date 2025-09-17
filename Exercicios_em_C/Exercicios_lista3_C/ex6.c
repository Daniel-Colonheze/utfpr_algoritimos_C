#include <stdio.h>
#include <math.h>

int main(){
	float PRECO_M, LC, PF, IPI, ICM;
	printf("Informe o preço da montadora: ");
	scanf("%f", &PRECO_M);
	LC = PRECO_M * 0.15;
	IPI = PRECO_M * 0.11;
	ICM = PRECO_M * 0.17;
	PF = PRECO_M + LC + IPI + ICM;
	printf("O lucro foi de: %.2f, o IPI foi de: %.2f e o ICM foi de: %.2f /n ", LC, IPI, ICM);
	printf("O preço final foi de: %.2f", PF);
    return 0;
}
