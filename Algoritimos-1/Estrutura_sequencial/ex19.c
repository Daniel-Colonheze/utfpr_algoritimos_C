#include <stdio.h>

int main() {
    int total_prestacoes, prestacoes_pagas;
    float valor_prestacao, total_pago, saldo_devedor;
    
    printf("Total de prestacoes: ");
    scanf("%d", &total_prestacoes);
    printf("Prestacoes pagas: ");
    scanf("%d", &prestacoes_pagas);
    printf("Valor atual da prestacao: R$ ");
    scanf("%f", &valor_prestacao);
    
    total_pago = prestacoes_pagas * valor_prestacao;
    saldo_devedor = (total_prestacoes - prestacoes_pagas) * valor_prestacao;
    
    printf("\nResumo:\n");
    printf("Total pago: R$ %.2f\n", total_pago);
    printf("Saldo devedor: R$ %.2f\n", saldo_devedor);
    
    return 0;
}