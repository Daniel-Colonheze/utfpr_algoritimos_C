#include <stdio.h>

int main() {
    int opcao_principal, opcao_secundaria;
    float valor, resultado;
    
    printf("Menu Principal:\n");
    printf("1 - Conversao de temperatura\n");
    printf("2 - Conversao de distancia\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao_principal);
    
    if (opcao_principal == 1) {
        printf("\nConversao de temperatura:\n");
        printf("1 - Converter Celsius para Farenheit\n");
        printf("2 - Converter Farenheit para Celsius\n");
        printf("3 - Converter Celsius para Kelvin\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao_secundaria);
        
        if (opcao_secundaria == 1) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &valor);
            resultado = (9 * valor / 5) + 32;
            printf("%.2f°C = %.2f°F\n", valor, resultado);
        } else if (opcao_secundaria == 2) {
            printf("Digite a temperatura em Farenheit: ");
            scanf("%f", &valor);
            resultado = 5 * (valor - 32) / 9;
            printf("%.2f°F = %.2f°C\n", valor, resultado);
        } else if (opcao_secundaria == 3) {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &valor);
            resultado = valor + 273;
            printf("%.2f°C = %.2fK\n", valor, resultado);
        } else {
            printf("Opcao invalida\n");
        }
        
    } else if (opcao_principal == 2) {
        printf("\nConversao de distancia:\n");
        printf("1 - Converter km para milhas\n");
        printf("2 - Converter milhas para km\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao_secundaria);
        
        if (opcao_secundaria == 1) {
            printf("Digite a distancia em km: ");
            scanf("%f", &valor);
            resultado = valor * 0.62137;
            printf("%.2f km = %.2f milhas\n", valor, resultado);
        } else if (opcao_secundaria == 2) {
            printf("Digite a distancia em milhas: ");
            scanf("%f", &valor);
            resultado = valor / 0.62137;
            printf("%.2f milhas = %.2f km\n", valor, resultado);
        } else {
            printf("Opcao invalida\n");
        }
        
    } else {
        printf("Opcao invalida\n");
    }
    
    return 0;
}