#include <stdio.h>
#include <math.h>

int main(){
	float X1, Y1, X2, Y2, DISTANCIA;
    printf("Informe a coordenada X do primeiro ponto: ");
    scanf("%f", &X1);
    printf("Informe a coordenada Y do primeiro ponto: ");
    scanf("%f", &Y1);
    printf("Informe a coordenada X do segundo ponto: \n");
    scanf("%f", &X2);
    printf("Informe a coordenada Y do segundo ponto: \n");
    scanf("%f", &Y2);
    DISTANCIA = sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
    printf("A distância entre os pontos é: %.2f", DISTANCIA);

    return 0;

}
