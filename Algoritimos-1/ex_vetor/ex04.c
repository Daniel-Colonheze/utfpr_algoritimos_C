#include <stdio.h>

int main() {
    float numeros[5];
    float menor_valor;
    int i;

    printf("Encontrar o menor de 5 Numeros Reais\n");

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº numero real: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    menor_valor = numeros[0]; 

    for (i = 1; i < 5; i++) {
        if (numeros[i] < menor_valor) {
            menor_valor = numeros[i];
        }
    }

    printf("\nO menor numero digitado e: %.2f\n", menor_valor);

    return 0;
}