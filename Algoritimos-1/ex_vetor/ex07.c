#include <stdio.h>

int main() {
    int v[6], i;
    for(i = 0; i < 6; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &v[5 - i]);
    }
    printf("Vetor final alterado: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}