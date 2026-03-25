#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char estadoCivil, filhos;
    float salario, bonus;

    printf("Digite o salário-base: ");
    scanf("%f", &salario);
    printf("O colaborador é solteiro? (s/n): ");
    scanf(" %c", &estadoCivil);
    printf("O colaborador tem filhos? (s/n): ");
    scanf(" %c", &filhos);

    switch (estadoCivil)
    {
    case 's':
    case 'S':
        bonus = 0;
        break;
    case 'n':
    case 'N':
        switch (filhos)
        {
        case 's':
        case 'S':
            bonus = salario * 0.20;
            break;
        case 'n':
        case 'N':
            bonus = salario * 0.15;
            break;
        default:
            bonus = 0;
        }
        break;
    default:
        bonus = 0;
    }

    printf("Salário final: %.2f\n", salario + bonus);
    return 0;
}
