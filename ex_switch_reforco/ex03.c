#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nota;
    printf("Digite a nota do aluno (1 a 10): ");
    scanf("%d", &nota);

    switch (nota)
    {
    case 1:
    case 2:
        printf("Situação: nota péssima\n");
        break;
    case 3:
    case 4:
        printf("Situação: nota ruim\n");
        break;
    case 5:
    case 6:
        printf("Situação: nota razoável\n");
        break;
    case 7:
        printf("Situação: nota boa\n");
        break;
    case 8:
    case 9:
        printf("Situação: nota muito boa\n");
        break;
    case 10:
        printf("Situação: nota ótima\n");
        break;
    default:
        printf("Nota inválida\n");
    }
    return 0;
}
