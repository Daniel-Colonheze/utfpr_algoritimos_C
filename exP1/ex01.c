#include <stdio.h>
#include <string.h>
#include <float.h>

int main()
{
    char codigo[10];
    float preco;
    int quantidade;
    int totalProdutos = 0;
    int conta150a500 = 0;
    int encontradoP101 = 0;
    float precoP101 = 0.0f;
    char codigoMaisBarato[10] = "";
    float menorPreco = FLT_MAX;
    char continuar[4] = "Sim";

    while (strcmp(continuar, "Sim") == 0 || strcmp(continuar, "sim") == 0)
    {
        printf("\nDigite o código do produto (4 caracteres, ex: P001): ");
        scanf("%9s", codigo);
        printf("Digite o preço (R$): ");
        scanf("%f", &preco);
        printf("Digite a quantidade (inteiro): ");
        scanf("%d", &quantidade);

        totalProdutos++;

        int numCodigo = 0;
        int parse_ok = 0;
        if (strlen(codigo) >= 2)
        {
            if (sscanf(codigo + 1, "%d", &numCodigo) == 1)
                parse_ok = 1;
        }

        if (parse_ok && (numCodigo % 2 == 0))
        {
            printf("a) Preço do produto %s (código par): R$ %.2f\n", codigo, preco);
        }

        if (preco >= 110.0f)
        {
            printf("b) Código do produto com preço >= R$110,00: %s\n", codigo);
        }

        if (preco >= 150.0f && preco <= 500.0f)
        {
            conta150a500++;
        }

        if (strcmp(codigo, "P101") == 0)
        {
            encontradoP101 = 1;
            precoP101 = preco;
        }

        if (preco < menorPreco)
        {
            menorPreco = preco;
            strcpy(codigoMaisBarato, codigo);
        }

        printf("Deseja cadastrar mais produtos (Sim ou sim)? ");
        if (scanf("%s", continuar) != 1)
            break;
    }

    printf("\nRESULTADOS FINAIS\n");
    printf("c) Quantidade de produtos distintos em estoque: %d\n", totalProdutos);

    if (totalProdutos > 0)
    {
        float percentual = ((float)conta150a500 * 100.0f) / (float)totalProdutos;
        printf("d) Percentual de produtos com preço entre R$150,00 e R$500,00: %.2f%%\n", percentual);
    }
    else
    {
        printf("d) Percentual de produtos com preço entre R$150,00 e R$500,00: 0.00%%\n");
    }

    if (encontradoP101)
    {
        printf("e) Preço do produto com código P101: R$ %.2f\n", precoP101);
    }
    else
    {
        printf("e) Produto P101 não foi cadastrado.\n");
    }

    if (totalProdutos > 0)
    {
        printf("f) Código do produto mais barato: %s (R$ %.2f)\n", codigoMaisBarato, menorPreco);
    }
    else
    {
        printf("f) Nenhum produto cadastrado.\n");
    }

    return 0;
}
