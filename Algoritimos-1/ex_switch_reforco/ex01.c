#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char conceito;
    printf("Digite o conceito do aluno (A, B, C ou D): ");
    scanf(" %c", &conceito);

    switch (conceito)
    {
    case 'A':
    case 'a':
        printf("Conceito A - Conhecimento Pleno.\n");
        break;
    case 'B':
    case 'b':
        printf("Conceito B - Conhecimento Parcialmente Pleno.\n");
        break;
    case 'C':
    case 'c':
        printf("Conceito C - Conhecimento Suficiente.\n");
        break;
    case 'D':
    case 'd':
        printf("Conceito D - Conhecimento Insuficiente.\n");
        break;
    default:
        printf("Conceito inválido.\n");
    }

    return 0;
}
