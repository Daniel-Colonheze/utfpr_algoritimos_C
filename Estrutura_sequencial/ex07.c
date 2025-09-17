#include <stdio.h>
#include <locale.h>

int main()
{
    int A, B, C, R, S, D;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    R = (A + B) * (A + B);
    S = (B + C) * (B + C);
    D = (R + S) / 2;

    printf("D = %d\n", D);

    return 0;
}
