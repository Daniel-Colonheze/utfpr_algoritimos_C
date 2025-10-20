#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet1[5], vet2[5], vet3[5], i, j, temp;
    srand(time(NULL));
    for (i = 0; i < 5; i++) vet1[i] = (i + 1) * 2;
    for (i = 0; i < 5; i++) vet2[i] = (rand() % 80) + 21;
    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 5; j++)
            if (vet1[i] > vet1[j]) { temp = vet1[i]; vet1[i] = vet1[j]; vet1[j] = temp; }
    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 5; j++)
            if (vet2[i] < vet2[j]) { temp = vet2[i]; vet2[i] = vet2[j]; vet2[j] = temp; }
    for (i = 0; i < 5; i++) vet3[i] = vet1[i] + vet2[i];
    printf("Vetor 1 (crescente): ");
    for (i = 0; i < 5; i++) printf("%d ", vet1[i]);
    printf("\nVetor 2 (decrescente): ");
    for (i = 0; i < 5; i++) printf("%d ", vet2[i]);
    printf("\nVetor 3 (somas): ");
    for (i = 0; i < 5; i++) printf("%d ", vet3[i]);
    printf("\n");
    return 0;
}
