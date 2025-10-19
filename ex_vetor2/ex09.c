#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[10], num, i, j, repetido, encontrado = 0;
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        do {
            vet[i] = rand() % 50 + 1;
            repetido = 0;
            for (j = 0; j < i; j++)
                if (vet[i] == vet[j]) repetido = 1;
        } while (repetido);
    }
    for (i = 0; i < 10; i++) printf("%d ", vet[i]);
    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++) {
        if (vet[i] == num) {
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("O numero nao foi encontrado no vetor.\n");
    return 0;
}
