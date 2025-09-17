#include <stdio.h>
#include <locale.h>

int main()
{
    double valorDolar, taxaDolar, icms, lucro, valorReais, valorFinal;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor da compra em dólares: ");
    scanf("%lf", &valorDolar);

    printf("Digite a taxa do dólar no dia: ");
    scanf("%lf", &taxaDolar);

    printf("Digite o percentual de ICMS: ");
    scanf("%lf", &icms);

    printf("Digite o percentual de lucro: ");
    scanf("%lf", &lucro);

    valorReais = valorDolar * taxaDolar;
    valorFinal = valorReais + (valorReais * icms / 100) + (valorReais * lucro / 100);

    printf("Valor final em reais = %.2lf\n", valorFinal);

    return 0;
}