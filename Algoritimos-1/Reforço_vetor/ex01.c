#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero[15], i, j, repetido, negativos = 0;
    srand(time(NULL));
    for (i = 0; i < 15; i++) {
        do {
            numero[i] = (rand() % 200) - 100;
            repetido = 0;
            for (j = 0; j < i; j++)
                if (numero[i] == numero[j]) repetido = 1;
        } while (repetido);
    }
    for (i = 0; i < 15; i++) {
        printf("%d ", numero[i]);
        if (numero[i] < 0) negativos++;
    }
    printf("\nQuantidade de negativos: %d\n", negativos);
    return 0;
}
