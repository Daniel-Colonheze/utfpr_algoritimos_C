#include <stdio.h>

int main() {
    int m[3][2];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (j = 0; j < 2; j++) {
        for (i = 0; i < 3; i++) {
            printf("%d", m[i][j]);
            if (i < 2) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
