#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char capital[30];

    printf("Capital: ");
    scanf("%[^\n]", capital);

    if (strcmp(capital, "São Paulo") == 0 || strcmp(capital, "Rio de Janeiro") == 0 || strcmp(capital, "Belo Horizonte") == 0 || strcmp(capital, "Vitória") == 0)
        printf("Sudeste\n");
    else if (strcmp(capital, "Salvador") == 0 || strcmp(capital, "Recife") == 0 || strcmp(capital, "Fortaleza") == 0 || strcmp(capital, "Natal") == 0 || strcmp(capital, "João Pessoa") == 0 || strcmp(capital, "Teresina") == 0 || strcmp(capital, "São Luís") == 0 || strcmp(capital, "Maceió") == 0 || strcmp(capital, "Aracaju") == 0)
        printf("Nordeste\n");
    else
        printf("Outra região\n");

    return 0;
}
