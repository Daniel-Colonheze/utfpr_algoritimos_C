#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Jogador 1, digite um número: ");
    scanf("%d", &num1);

    printf("Jogador 2, tente adivinhar o número: ");
    scanf("%d", &num2);

    if (num2 == num1)
        printf("Você acertou!!!\n");
    else
        printf("Você errou! Diferença: %d\n", abs(num2 - num1));

    return 0;
}
