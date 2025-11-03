#include <stdio.h>

#define TAM 3

int main() {
    int matriz[TAM][TAM];
    int i, j, menor, linhaMenor = 0, colunaMenor = 0, soma;

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("Digite um numero inteiro positivo [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    menor = matriz[0][0];
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    matriz[linhaMenor][colunaMenor] = matriz[0][0];

    printf("\nMenor valor encontrado: %d na linha %d, coluna %d\n", menor, linhaMenor, colunaMenor);

    printf("\nSoma dos valores de cada linha:\n");
    for(i = 0; i < TAM; i++) {
        soma = 0;
        for(j = 0; j < TAM; j++) {
            soma += matriz[i][j];
        }
        printf("Linha %d: %d\n", i, soma);
    }

    return 0;
}
