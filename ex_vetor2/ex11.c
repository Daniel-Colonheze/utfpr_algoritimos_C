#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[20], i, cont = 0;
    srand(time(NULL));
    for (i = 0; i < 20; i++) vet[i] = (rand() % 50) * 2 + 1;
    printf("Multiplos de 5:\n");
    for (i = 0; i < 20; i++) if (vet[i] % 5 == 0) { printf("%d ", vet[i]); cont++; }
    printf("\nTotal de multiplos de 5: %d\n", cont);
    printf("\nNumeros nas posicoes pares:\n");
    for (i = 0; i < 20; i += 2) printf("%d ", vet[i]);
    printf("\n\nVetor original:\n");
    for (i = 0; i < 20; i++) printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
