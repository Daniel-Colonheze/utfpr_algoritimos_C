#include <stdio.h>
#include <locale.h>

int main()
{
    int M, N, L1, L2, H;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor de M: ");
    scanf("%d", &M);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    L1 = M * M - N * N;
    L2 = 2 * M * N;
    H = M * M + N * N;

    printf("L1 = %d, L2 = %d, Hipotenusa = %d\n", L1, L2, H);

    return 0;
}
