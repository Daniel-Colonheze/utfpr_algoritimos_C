#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char estadoCivil, temFilhos;
    float salario, bonus = 0;

    printf("Digite seu salário (em R$): ");
    scanf("%f", &salario);

    printf("Você é solteiro(a)? Digite 's' para sim ou 'n' para não: ");
    scanf(" %c", &estadoCivil);

    if (estadoCivil == 'n' || estadoCivil == 'N')
    {
        printf("Você tem filhos? Digite 's' para sim ou 'n' para não: ");
        scanf(" %c", &temFilhos);

        if (temFilhos == 's' || temFilhos == 'S')
            bonus = salario * 0.20;
        else
            bonus = salario * 0.15;
    }
    else
    {
        bonus = 0;
    }

    printf("Seu salário final com bônus é: R$ %.2f\n", salario + bonus);

    return 0;
}
