#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int preco[10], i, j, repetido;
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        do {
            preco[i] = rand() % 100 + 1;
            repetido = 0;
            for (j = 0; j < i; j++)
                if (preco[i] == preco[j]) repetido = 1;
        } while (repetido);
    }
    for (i = 0; i < 10; i++) {
        printf("Produto %d: %d - %s\n", i, preco[i], (preco[i] % 2 == 0) ? "Par" : "Impar");
    }
    return 0;
}
