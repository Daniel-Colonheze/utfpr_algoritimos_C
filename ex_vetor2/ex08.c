#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet1[5], vet2[5], soma[5], i;
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        vet1[i] = rand() % 50 + 1;
        vet2[i] = rand() % 50 + 1;
    }
    printf("Vetor 1: ");
    for (i = 0; i < 5; i++) printf("%d ", vet1[i]);
    printf("\nVetor 2: ");
    for (i = 0; i < 5; i++) printf("%d ", vet2[i]);
    printf("\nSoma: ");
    for (i = 0; i < 5; i++) {
        soma[i] = vet1[i] + vet2[i];
        printf("%d ", soma[i]);
    }
    printf("\n");
    return 0;
}
