#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[8], num, i, existe = 0;
    srand(time(NULL));
    for (i = 0; i < 8; i++) vet[i] = rand() % 50 + 1;
    for (i = 0; i < 8; i++) printf("%d ", vet[i]);
    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &num);
    for (i = 0; i < 8; i++) {
        if (vet[i] == num) {
            printf("Numero encontrado na posicao %d\n", i);
            existe = 1;
        }
    }
    if (!existe) printf("O numero nao existe no vetor.\n");
    return 0;
}
