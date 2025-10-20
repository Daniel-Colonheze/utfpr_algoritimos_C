#include <stdio.h>

int main() {
    int vet[8], i, j, temp;
    for (i = 0; i < 8; i++) {
        printf("Digite o numero para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("\nNumeros digitados em ordem decrescente:\n");
    for (i = 0; i < 8 - 1; i++)
        for (j = i + 1; j < 8; j++)
            if (vet[i] < vet[j]) { temp = vet[i]; vet[i] = vet[j]; vet[j] = temp; }
    for (i = 0; i < 8; i++) printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
