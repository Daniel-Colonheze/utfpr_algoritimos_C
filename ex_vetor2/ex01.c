#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int numeros[20];
    int i;

    srand(time(NULL));

    printf("Gerando 20 numeros inteiros positivos aleatorios:\n");
    for (i = 0; i < 20; i++) {
        numeros[i] = rand() % 100 + 1;  
        printf("%d ", numeros[i]);
    }

    printf("\n");
    return 0;
}