#include <stdio.h>

int main() {
    int numeros[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Números na ordem invertida: ");
    for (i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}