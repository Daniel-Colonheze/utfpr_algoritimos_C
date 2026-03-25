#include <stdio.h>

int main() {
    int vet[10], i, num = 2;
    for (i = 0; i < 10; i++) {
        vet[i] = num;
        num += 2;
    }
    for (i = 0; i < 10; i++) printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
