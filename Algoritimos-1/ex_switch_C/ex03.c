#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    float area_retangulo, area_circulo, area_triangulo;
    float altura, base, raio;
    char op;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\tMENU\n");
    printf("\n1 - Calcular a área de um retângulo");
    printf("\n2 - Calcular a área de um círculo");
    printf("\n3 - Calcular a área de um triângulo");
    printf("\nDigite uma das opçoes: ");
    scanf(" %c", &op);

    switch(op) {
        case '1':
            printf("Digite a altura: ");
            scanf("%f", &altura);
            printf("Digite a base: ");
            scanf("%f", &base);
            area_retangulo = altura * base;
            printf("A área do retângulo é: %.2f\n", area_retangulo);
            break;

        case '2':
            printf("Digite o raio do círculo: ");
            scanf("%f", &raio);
            area_circulo = M_PI * raio * raio;
            printf("A área do círculo é: %.2f\n", area_circulo);
            break;

        case '3':
            printf("Digite a base do triângulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triângulo: ");
            scanf("%f", &altura);
            area_triangulo = (base * altura) / 2;
            printf("A área do triângulo é: %.2f\n", area_triangulo);
            break;

        default:
            printf("Erro: opção inválida!\n");
    }

    return 0;
}
