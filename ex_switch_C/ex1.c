#include <stdio.h>
#include <locale.h>
int main()
{
    char num;
    setlocale(LC_ALL, "Portuguese");
    printf("\n\tMonstrodex\n");
    printf("1 - Zicachu\n");
    printf("2 - Zulbassauro\n");
    printf("3 - Zharmander\n");
    printf("Escoloha uma das três opções: ");
    scanf(" %c", &num);

    switch (num)
    {
    case '1':
        printf("Monstrinho elétrico da categoria rato");
        break;
    case '2':
        printf("Monstrinho de grama da categoria semente");
        break;
    case '3':
        printf("Monstrinho de fogo da categoria lagarto");
        break;
    default:
        printf("Monstrinho não cadastrado. Há 8900 monstros! Temos que pegar!");
        break;
    }
    return 0;
}