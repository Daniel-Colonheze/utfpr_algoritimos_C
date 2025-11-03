#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int v1[TAM], v2[TAM], soma[TAM], matriz[TAM][2];
    int i;

    srand(time(NULL));

    for(i = 0; i < TAM; i++) {
        v1[i] = rand() % 100;
        v2[i] = rand() % 100;
    }

    for(i = 0; i < TAM; i++) {
        matriz[i][0] = v1[i];
        matriz[i][1] = v2[i];
        soma[i] = v1[i] + v2[i];
    }

    printf("Matriz 10x2:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d\t%d\n", matriz[i][0], matriz[i][1]);
    }

    printf("\nVetor soma:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ", soma[i]);
    }

    return 0;
}
