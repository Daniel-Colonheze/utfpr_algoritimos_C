#include <stdio.h>

int main() {
    int m[2][3];
    int i, j, soma;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("Matriz: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
        
    for (i = 0; i < 2; i++) {
        soma = 0;
        for (j = 0; j < 3; j++){
          soma = soma + m[i][j];  
        } 
        printf("Soma da linha %d: %d\n", i, soma);
    }
    return 0;
}
