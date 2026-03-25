#include <stdio.h>

int main() {
    int numeros[5];
    int i;
    int temp; 

    printf("Troca de Posicoes: Primeiro e Ultimo\n");

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    temp = numeros[0]; 
    numeros[0] = numeros[4]; 
    numeros[4] = temp;

    printf("Troca realizada com sucesso: [ %d, %d, %d, %d, %d ]\n", 
           numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);

    return 0;
}