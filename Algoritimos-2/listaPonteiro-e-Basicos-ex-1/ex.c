#include <stdio.h>

int imprimir_vetor(int vetor1[]);

int main()
{
    int vetor1[5], i;
    
    for(i = 0; i < 5; i++)
    {
        printf("Digite números de um vetor para ser imprimido: ");
        scanf("%d", &vetor1[i]); 
    }
    
    imprimir_vetor(vetor1);
    return 0;
}

int imprimir_vetor(int vetor1[]){
    int i;
    for(i = 0; i < 5; i++){
        printf("Vetor na posicao %d é igual a: %d\n", i + 1, vetor1[i] );
    }
}