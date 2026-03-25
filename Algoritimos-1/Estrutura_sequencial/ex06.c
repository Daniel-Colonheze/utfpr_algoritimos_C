#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    double raio, altura, area, volume;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    area = 2 * M_PI * raio * (altura + raio);
    volume = M_PI * raio * raio * altura;

    printf("Área = %.2lf\n", area);
    printf("Volume = %.2lf\n", volume);

    return 0;
}
