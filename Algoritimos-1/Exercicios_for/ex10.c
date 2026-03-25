#include <stdio.h>
#include <locale.h>

int main()
{
    int cont, ini, fim;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número inicial: ");
    scanf("%d", &ini);
    printf("Digite o número final: ");
    scanf("%d", &fim);

    if (ini < fim)
    {
        for (cont = ini; cont <= fim; cont++)
        {
            printf("%d\n", cont);
        }
    }
    else
    {
        for (cont = ini; cont >= fim; cont--)
        {
            printf("%d\n", cont);
        }
    }
    return 0;
}