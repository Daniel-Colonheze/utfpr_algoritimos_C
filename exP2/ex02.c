#include <stdio.h>
#define TAM 15

int main() {
    float produtos[TAM];
    int i;
    float saldo = 0;

    for(i = 0; i < TAM; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &produtos[i]);
    }


    printf("\nVetor Original:\n");
    for(i = 0; i < TAM; i++) {
        printf("%.2f ", produtos[i]);
        saldo = saldo + produtos[i];
    }
    printf("\n\nSaldo total do estoque: R$ %.2f\n", saldo);


    for(i = 0; i < TAM; i += 2) {
        produtos[i] = produtos[i] * 1.05;
    }

    printf("\nVetor resultante em ordem inversa:\n");
    for(i = TAM - 1; i >= 0; i--) {
        printf("%.2f ", produtos[i]);
    }

    printf("\n");
    return 0;
}
