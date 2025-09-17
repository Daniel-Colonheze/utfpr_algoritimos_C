#include <stdio.h>
#include <locale.h>

int main()
{
    int a11, a12, a21, a22, det;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor de a11: ");
    scanf("%d", &a11);

    printf("Digite o valor de a12: ");
    scanf("%d", &a12);

    printf("Digite o valor de a21: ");
    scanf("%d", &a21);

    printf("Digite o valor de a22: ");
    scanf("%d", &a22);

    det = a11 * a22 - a21 * a12;
    printf("Determinante = %d\n", det);

    return 0;
}
