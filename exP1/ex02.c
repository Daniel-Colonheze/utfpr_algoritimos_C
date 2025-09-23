#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;
    int quantidade, i;
    int num;
    double resultado;

    do
    {
        printf("\nMENU\n");
        printf("1 – Adição\n");
        printf("2 – Exponenciação\n");
        printf("3 – Divisão Simples\n");
        printf("4 – Resto da Divisão\n");
        printf("5 – Primeiro número é par\n");
        printf("6 – Segundo número é ímpar\n");
        printf("0 – Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Quantos números deseja somar? ");
            scanf("%d", &quantidade);
            resultado = 0;
            for (i = 1; i <= quantidade; i++)
            {
                printf("Digite o número %d: ", i);
                scanf("%d", &num);
                resultado += num;
            }
            printf("Resultado da adição: %.0lf\n", resultado);
            break;

        case 2:
            printf("Quantos números deseja usar na exponenciação? ");
            scanf("%d", &quantidade);
            if (quantidade < 2)
            {
                printf("É necessário pelo menos 2 números.\n");
                break;
            }
            printf("Digite a base: ");
            scanf("%d", &num);
            resultado = num;
            for (i = 2; i <= quantidade; i++)
            {
                printf("Digite o expoente %d: ", i - 1);
                scanf("%d", &num);
                resultado = pow(resultado, num);
            }
            printf("Resultado da exponenciação: %.2lf\n", resultado);
            break;

        case 3:
            printf("Quantos números deseja dividir? ");
            scanf("%d", &quantidade);
            if (quantidade < 2)
            {
                printf("É necessário pelo menos 2 números.\n");
                break;
            }
            printf("Digite o dividendo: ");
            scanf("%d", &num);
            resultado = num;
            for (i = 2; i <= quantidade; i++)
            {
                printf("Digite o divisor %d: ", i - 1);
                scanf("%d", &num);
                if (num == 0)
                {
                    printf("Erro: divisão por zero!\n");
                    resultado = 0;
                    break;
                }
                resultado /= num;
            }
            printf("Resultado da divisão: %.2lf\n", resultado);
            break;

        case 4:
            printf("Quantos números deseja usar no resto da divisão? ");
            scanf("%d", &quantidade);
            if (quantidade < 2)
            {
                printf("É necessário pelo menos 2 números.\n");
                break;
            }
            printf("Digite o dividendo: ");
            scanf("%d", &num);
            resultado = num;
            for (i = 2; i <= quantidade; i++)
            {
                printf("Digite o divisor %d: ", i - 1);
                scanf("%d", &num);
                if (num == 0)
                {
                    printf("Erro: divisão por zero!\n");
                    resultado = 0;
                    break;
                }
                resultado = (int)resultado % num;
            }
            printf("Resultado do resto da divisão: %.0lf\n", resultado);
            break;

        case 5:
            printf("Quantos números deseja verificar? ");
            scanf("%d", &quantidade);
            for (i = 1; i <= quantidade; i++)
            {
                printf("Digite o número %d: ", i);
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("O número %d é par.\n", num);
                else
                    printf("O número %d nao é par.\n", num);
            }
            break;

        case 6:
            printf("Quantos números deseja verificar? ");
            scanf("%d", &quantidade);
            for (i = 1; i <= quantidade; i++)
            {
                printf("Digite o primeiro número: ");
                scanf("%d", &num);
                printf("Digite o segundo número: ");
                int num2;
                scanf("%d", &num2);
                if (num2 % 2 != 0)
                    printf("O segundo número %d é impar.\n", num2);
                else
                    printf("O segundo número %d nao é ímpar.\n", num2);
            }
            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
