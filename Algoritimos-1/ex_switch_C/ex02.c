#include <stdio.h>
#include <locale.h>
int main()
{
    char op;
    setlocale(LC_ALL, "Portuguese");
    printf("\n\tMENU\n");
    printf("\nA- Avião");
    printf("\nB- Carro");
    printf("\nC- Cruzeiro");
    printf("\nDigite uma dessas opções: ");
    scanf(" %c", &op);
    
    switch(op){
        case 'a':
        case 'A':
            printf("É mais rápido!\n");
            break;
        case 'b':
        case 'B':
            printf("É mais barato!\n");
            break;
        case 'c':
        case 'C':
            printf("É mais bonito!\n");
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}