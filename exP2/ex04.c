#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

int main() {
    int matriz[TAM][TAM];
    int i, j, maiores10 = 0, somaDiagonal = 0;

    srand(time(NULL));

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 30;
        }
    }

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            if(matriz[i][j] > 10)
                maiores10++;
            if(i == j)
                somaDiagonal += matriz[i][j];
        }
    }

    printf("Quantidade de valores maiores que 10: %d\n", maiores10);
    printf("Soma da diagonal principal: %d\n\n", somaDiagonal);

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            if(i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    printf("Matriz identidade:\n");
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
