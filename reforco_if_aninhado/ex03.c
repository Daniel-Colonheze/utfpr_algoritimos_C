#include <stdio.h>
#include <math.h>

int main()
{
    int lados;
    float medida, area;

    printf("Digite o número de lados do polígono: ");
    scanf("%d", &lados);

    if (lados == 3)
    {
        printf("Digite a medida do lado (em cm): ");
        scanf("%f", &medida);
        area = (sqrt(3) / 4) * medida * medida; // área do triângulo equilátero
        printf("TRIÂNGULO\n");
        printf("Área = %.2f cm²\n", area);
    }
    else if (lados == 4)
    {
        printf("Digite a medida do lado (em cm): ");
        scanf("%f", &medida);
        area = medida * medida; // área do quadrado
        printf("QUADRADO\n");
        printf("Área = %.2f cm²\n", area);
    }
    else if (lados == 5)
    {
        printf("Digite a medida do lado (em cm): ");
        scanf("%f", &medida);
        printf("PENTÁGONO\n");
    }
    else
    {
        printf("Número de lados não suportado para esta questão.\n");
    }

    return 0;
}
