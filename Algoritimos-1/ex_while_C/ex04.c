#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Usuario 1, digite um numero: ");
    scanf("%d", &num1);

    do
    {
        printf("Usuario 2, tente adivinhar o numero: ");
        scanf("%d", &num2);
    } while (num2 != num1);

    printf("Parabens, voce acertou\n");

    return 0;
}
