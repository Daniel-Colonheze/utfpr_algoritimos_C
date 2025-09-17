#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    switch (idade)
    {
    case 5:
    case 6:
    case 7:
        printf("Infantil A\n");
        break;
    case 8:
    case 9:
    case 10:
        printf("Infantil B\n");
        break;
    case 11:
    case 12:
    case 13:
        printf("Juvenil A\n");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("Juvenil B\n");
        break;
    default:
        if (idade > 18)
            printf("Sênior\n");
        else
            printf("Idade fora das categorias\n");
    }
    return 0;
}
