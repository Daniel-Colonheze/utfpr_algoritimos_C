#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantidade;
    float preco;

    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12)
        preco = 2.30 * quantidade;
    else
        preco = 2.00 * quantidade;

    printf("Valor total da compra: R$ %.2f\n", preco);

    return 0;
}
