#include <stdio.h>
#include <locale.h>

int main()
{
    int dias, anos, meses, resto;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    resto = dias % 365;
    meses = resto / 30;
    dias = resto % 30;

    printf("%d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}
