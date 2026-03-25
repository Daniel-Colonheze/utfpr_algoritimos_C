#include <stdio.h>
#include <locale.h>

int main()
{
    double distancia, volume, consumo;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a distância percorrida (km): ");
    scanf("%lf", &distancia);

    printf("Digite o volume de combustível consumido (litros): ");
    scanf("%lf", &volume);

    consumo = distancia / volume;
    printf("Consumo médio = %.2lf km/l\n", consumo);

    return 0;
}
