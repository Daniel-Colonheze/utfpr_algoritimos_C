#include <stdio.h>
#include <math.h>

int main() {
    float altura, raio, preco_lata;
    float area_total, litros_necessarios, latas_necessarias, custo_total;
    printf("Digite o valor do raio (em metros): ");
    scanf("%f", &raio);
    printf("Digite o valor da altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o preco da lata de tinta (em reais): ");
    scanf("%f", &preco_lata);
    area_total = 2 * M_PI * raio * (altura + raio);
    latas_necessarias = area_total / 15.0;
    custo_total = latas_necessarias * preco_lata;
    printf("Area total a ser pintada: %.2f m²\n", area_total);
    printf("Latas de tinta necessarias: %.2f\n", latas_necessarias);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}
