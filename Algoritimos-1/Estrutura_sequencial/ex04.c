#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    double L1, L2, L3, T, area;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor de L1: ");
    scanf("%lf", &L1);

    printf("Digite o valor de L2: ");
    scanf("%lf", &L2);

    printf("Digite o valor de L3: ");
    scanf("%lf", &L3);

    T = (L1 + L2 + L3) / 2.0;
    area = sqrt(T * (T - L1) * (T - L2) * (T - L3));

    printf("Área = %.2lf\n", area);

    return 0;
}
