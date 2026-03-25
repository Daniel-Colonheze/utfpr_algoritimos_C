#include <stdio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número entre 1 e 6: ");
    scanf("%d", &num);
    while (num < 1 || num > 6)
    {
        printf("valor inválido. Tente novamente\n");
        printf("Digite de novo: ");
        scanf("%d", &num);
        if (num >= 1 && num <= 6)
        {
            printf("Você digitou certo agora");
        }
    }
    return 0;
}