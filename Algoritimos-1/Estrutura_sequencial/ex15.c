#include <stdio.h>
#include <math.h>

int main() {
    float aplicacao_mensal, taxa, valor_acumulado;
    int meses;
    
    printf("Valor da aplicacao mensal: R$ ");
    scanf("%f", &aplicacao_mensal);
    printf("Taxa de juros mensal (em decimal): ");
    scanf("%f", &taxa);
    printf("Numero de meses: ");
    scanf("%d", &meses);
    
    valor_acumulado = ((pow(1 + taxa, meses) - 1) / taxa) * aplicacao_mensal;
    
    printf("\nValor acumulado: R$ %.2f\n", valor_acumulado);
    
    return 0;
}