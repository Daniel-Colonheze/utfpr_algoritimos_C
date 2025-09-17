#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade, opcao;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Digite 1 para carro ou 2 para moto: ");
        scanf("%d", &opcao);
        if (opcao == 1)
            printf("Muito bom! Viajar requer espaço para mala!\n");
        else if (opcao == 2)
            printf("Um Lobo Solitário não precisa de mala para atravessar o país\n");
        else
            printf("Opção inválida!\n");
    }
    else
    {
        printf("Digite 1 para suco ou 2 para refrigerante: ");
        scanf("%d", &opcao);
        if (opcao == 1)
            printf("Muito bom! Suco é saudável!\n");
        else if (opcao == 2)
            printf("Refrigerante é refrescante e combina com pipoca!\n");
        else
            printf("Opção inválida!\n");
    }

    printf("Até breve!\n");

    return 0;
}
