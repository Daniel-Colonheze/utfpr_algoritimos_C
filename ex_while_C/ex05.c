#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("\nMENU:\n");
        printf("1 - Dizer \"Oi\"\n");
        printf("2 - Dizer \"Ola\"\n");
        printf("0 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            printf("Oi\n");
        }
        else if (opcao == 2)
        {
            printf("Ola\n");
        }
        else if (opcao == 0)
        {
            printf("Encerrando...\n");
        }
        else
        {
            printf("Opcao invalida\n");
        }
    } while (opcao != 0);
    return 0;
}