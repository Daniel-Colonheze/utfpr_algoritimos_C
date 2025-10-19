#include <stdio.h>

int main() {
    int vet[100], i;
    for (i = 0; i < 100; i++) vet[i] = (i % 2 == 0) ? 1 : 0;
    for (i = 0; i < 100; i++) printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
