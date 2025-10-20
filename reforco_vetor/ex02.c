#include <stdio.h>

int main(){
    float matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor em reais de um numero na posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\nMatriz de numeros reais: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %.2f", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}