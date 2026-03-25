#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, aux;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    if (x > y)
    {
        aux = x;
        x = y;
        y = aux;
    }

    printf("Valores ordenados: x = %d, y = %d\n", x, y);

    return 0;
}
