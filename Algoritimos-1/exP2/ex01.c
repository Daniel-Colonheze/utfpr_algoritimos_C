#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, repetido, impares = 0;

    for (i = 0; i < 10; i++){
        do{
            repetido = 0;
            printf("Digite um numero inteiro na posicao %d :", i + 1);
            scanf("%d", &vetor[i]);

            for(j = 0; j < i; j++){
                if(vetor[i] == vetor[j]){
                    printf("numero repetido! Digite outro numero\n");
                    repetido = 1;
                }
            }
        }while (repetido == 1);
    }

    printf("Vetor original: \n");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    for (i = 0; i < 10; i++){
        if (vetor[i] % 2 != 0){
            impares = impares + 1;
        }
    }
    printf("Quantidades de numeros impares do vetor %d\n", impares);


    for(i = 0; i < 10; i += 2){
        printf("Posição %d -> %d\n", i, vetor[i]);
    }
    return 0;
}