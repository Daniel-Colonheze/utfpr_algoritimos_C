#include <stdio.h>
#include <locale.h>

int main()
{
    int cont, n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número positivo maior que 0: ");
    scanf("%d", &n);
    for (cont = 1; cont <= n; cont++)
    {
        printf("%d\n", cont);
    }
    return 0;
}
