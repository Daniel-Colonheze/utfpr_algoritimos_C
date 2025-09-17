#include <stdio.h>

int main() {
    float valor_prestacao, taxa_juros, valor_atualizado;
    int tempo_atraso;
    
    printf("Valor da prestacao: R$ ");
    scanf("%f", &valor_prestacao);
    printf("Taxa de juros (%%): ");
    scanf("%f", &taxa_juros);
    printf("Tempo de atraso (meses): ");
    scanf("%d", &tempo_atraso);
    
    valor_atualizado = valor_prestacao + (valor_prestacao * (taxa_juros/100) * tempo_atraso);
    
    printf("\nValor atualizado da prestacao: R$ %.2f\n", valor_atualizado);
    
    return 0;
}