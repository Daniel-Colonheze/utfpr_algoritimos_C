#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, z, aux;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    if (x > y)
    {
        aux = x;
        x = y;
        y = aux;
    }
    if (x > z)
    {
        aux = x;
        x = z;
        z = aux;
    }
    if (y > z)
    {
        aux = y;
        y = z;
        z = aux;
    }

    printf("Valores ordenados: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
