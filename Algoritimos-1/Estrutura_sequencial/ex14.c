#include <stdio.h>

int main() {
    float taxa_dia, taxa_km, total_aluguel, desconto;
    int dias, km_rodados;
    
    printf("Taxa fixa por dia: R$ ");
    scanf("%f", &taxa_dia);
    printf("Taxa por km rodado: R$ ");
    scanf("%f", &taxa_km);
    printf("Numero de dias: ");
    scanf("%d", &dias);
    printf("Quilometros rodados: ");
    scanf("%d", &km_rodados);
    
    desconto = (taxa_dia * dias) * 0.1;
    total_aluguel = (taxa_dia * dias * 0.9) + (taxa_km * km_rodados);
    
    printf("\nResumo do aluguel:\n");
    printf("Dias: %d\n", dias);
    printf("Km rodados: %d\n", km_rodados);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total do aluguel: R$ %.2f\n", total_aluguel);
    
    return 0;
}