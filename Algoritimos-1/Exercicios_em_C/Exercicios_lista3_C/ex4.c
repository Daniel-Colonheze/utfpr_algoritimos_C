#include <stdio.h>
#include <math.h>

int main() {
	float SF, SM, HT, HA, HE;
	int QTD_HT, QTD_HE, QTD_HA;
	printf("Informe a quantidade de horas trabalhadas:");
	scanf("%i", &QTD_HT);
	printf("Informe a quantidade de horas extras trabalhadas: ");
	scanf("%i", &QTD_HE);
	printf("Informe a quantidade de horas ausentes: ");
	scanf("%i", &QTD_HA);
	printf("Informe o valor do salario minimo: ");
	scanf("%f", &SM);
	HT = QTD_HT * (SM * 0.04);
	HA = QTD_HA * (SM * 0.04);
	HE = QTD_HE * (HT *  0.5);
	SF = (HT + HE - HA) * 0.11;
	printf("O salario final foi de : %.2f", SF);
 	return 0;
}
