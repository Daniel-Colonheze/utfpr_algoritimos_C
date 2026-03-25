#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[100], i, num, encontrado = 0;
    srand(time(NULL));
    for (i = 0; i < 100; i++) vet[i] = rand() % 1000;
    printf("Digite um numero para buscar: ");
    scanf("%d", &num);
    for (i = 0; i < 100; i++) {
        if (vet[i] == num) {
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }
    if (!encontrado) printf("Que pena!! Numero nao encontrado no vetor\n");
    return 0;
}
