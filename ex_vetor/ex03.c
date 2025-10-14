#include <stdio.h>

int main() {
    float numeros[5];
    float maior_valor;
    int i;

    printf("Encontrar o Maior de 5 Numeros Reais\n");

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº numero real: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    maior_valor = numeros[0]; 

    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior_valor) {
            maior_valor = numeros[i];
        }
    }
    printf("\nO maior numero digitado e: %.2f\n", maior_valor);

    return 0;
}