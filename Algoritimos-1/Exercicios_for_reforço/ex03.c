#include <stdio.h>

int main() {
    int num1, num2, i, soma = 0;

    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &num2);

    printf("Números ímpares entre %d e %d: ", num1, num2);

    if (num1 <= num2) {
        for (i = num1; i <= num2; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
                soma = soma + i;
            }
        }
    } else {
        for (i = num1; i >= num2; i--) {
            if (i % 2 != 0) {
                printf("%d ", i);
                soma = soma + i;
            }
        }
    }

    printf("\nSoma dos números ímpares: %d\n", soma);

    return 0;
}
