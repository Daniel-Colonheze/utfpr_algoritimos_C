#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número inferior que 1 ou superior a 6: ");
    scanf("%i", &num);

    if (num < 1 || num > 6) {
        printf("Valor digitado com sucesso");
    } else {
        printf("Valor não pode estar entre 1 e 6");
    }

    return 0;
}