#include <stdio.h>
#include <locale.h>

int main()
{
    double A, B, C, delta;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    delta = B * B - 4 * A * C;
    printf("Delta = %.2lf\n", delta);

    return 0;
}
