#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vet[10];
    int i;
    srand(time(NULL));
    printf("Gerando um vetor aleatorio: ");
    for(i=0;i < 10;i++)
    {
        vet[i] = rand() % 10 + 1;
        printf("%d ", vet[i]);
    }
    printf("Vetor com as posicoes inversas: ");
    for(i = 9; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}