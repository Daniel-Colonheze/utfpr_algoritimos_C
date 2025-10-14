#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[20];
    int i, maior, posicao;

    srand(time(NULL));

    printf("Gerando 20 numeros positivos:\n");
    for (i = 0; i < 20; i++) {
        vet[i] = rand() % 100 + 1;
        printf("%d ", vet[i]);
        if (i == 0 || vet[i] > maior) {
            maior = vet[i];
            posicao = i;
        }
    }

    printf("\nO maior elemento do vetor eh: %d", maior);
    printf("\nPosicao: %d\n", posicao);

    return 0;
}
