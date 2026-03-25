#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número entre 1 a 6: ");
    scanf("%i", &num);
    if(num >= 1 && num <= 6){
        printf("Valor digitado com sucesso");
    }else {
        printf("Valor fora do intervalo permitido");
    }
    return 0;
}