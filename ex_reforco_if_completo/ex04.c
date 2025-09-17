#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nota;
    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    if (nota >= 1 && nota <= 2)
        printf("Nota péssima\n");
    else if (nota >= 3 && nota <= 4)
        printf("Nota ruim\n");
    else if (nota >= 5 && nota <= 6)
        printf("Nota razoável\n");
    else if (nota == 7)
        printf("Nota boa\n");
    else if (nota >= 8 && nota <= 9)
        printf("Nota muito boa\n");
    else if (nota == 10)
        printf("Nota ótima\n");
    else
        printf("Nota inválida\n");

    return 0;
}
