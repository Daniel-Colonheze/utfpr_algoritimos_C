#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int peso[100], i, menor, pos;
    srand(time(NULL));
    for (i = 0; i < 100; i++) peso[i] = rand() % 100 + 40;
    menor = peso[0];
    pos = 0;
    for (i = 0; i < 100; i++) if (peso[i] < menor) { menor = peso[i]; pos = i; }
    printf("Vetor PESO:\n");
    for (i = 0; i < 100; i++) printf("%d ", peso[i]);
    printf("\nMenor peso: %d na posicao %d\n", menor, pos);
    printf("\nVetor PESO em ordem inversa:\n");
    for (i = 99; i >= 0; i--) printf("%d ", peso[i]);
    printf("\n");
    return 0;
}
