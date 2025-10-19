#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[8], i;
    srand(time(NULL));
    for (i = 0; i < 8; i++) {
        vet[i] = rand() % 100 + 1;
        printf("Numero %d armazenado na posicao %d\n", vet[i], i);
    }
    printf("\nNumeros gerados:\n");
    for (i = 0; i < 8; i++) printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
