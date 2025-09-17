#include <stdio.h>
#include <locale.h>

int main()
{
    int valor, n100, n50, n10, n5, n1;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um valor em reais: ");
    scanf("%d", &valor);

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n1 = valor;

    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    printf("Notas de 1: %d\n", n1);

    return 0;
}
