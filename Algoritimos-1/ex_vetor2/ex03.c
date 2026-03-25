#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int vet[10];
    int i, cont;
    srand(time(NULL));
    printf("Gerando 10 elementos do vetor aleatoriamente: ");
    for(i=0;i < 10;i++)
    {
        vet[i] = rand() % 10 + 1;
        printf("%d ", vet[i]);
        if(vet[i] < 10)
        {
            cont++;
        }
    }
    printf("A quantidade de numeros menores que 10 e de: %d", cont);
    return 0;
}