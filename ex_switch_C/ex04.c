#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int op; 
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o mês do ano (1 a 12) que você queira descobrir quantos dias ele possui: ");
    scanf("%d", &op);

    switch(op){
        case 1:
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Esse mês possui 31 dias\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("Esse mês possui 30 dias\n");
            break;

        case 2: 
            printf("Esse mês tem 28 dias (29 em anos bissextos)\n");
            break;

        default:
            printf("Valor inválido!\n");
    }

    return 0;
}

