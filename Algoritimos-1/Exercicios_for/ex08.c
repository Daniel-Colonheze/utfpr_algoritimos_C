#include <stdio.h>
#include <locale.h>

int main()
{
    int cont, n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número menor que 10: ");
    scanf("%d", &n);

    if (n < 10)
    {
        for (cont = n; cont <= 10; cont++)
        {
            printf("%d\n", cont);
        }
    }
    else
    {
        printf("Valor inválido!\n");
    }
    return 0;
}
