#include <stdio.h>
#include <math.h>

int main(){
	float TEMPO, VELOCIDADE, DISTANCIA, CONSUMO, GALOES;
    printf("Informe o tempo gasto na viagem em horas: ");
    scanf("%f", &TEMPO);
    printf("Informe a velocidade média em Km/h: ");
    scanf("%f", &VELOCIDADE);
    DISTANCIA = TEMPO * VELOCIDADE;
    CONSUMO = DISTANCIA / 12;
    GALOES = CONSUMO / 5;
    printf("Para a viagem, serão necessários %.2f galões, arredonde o número de galões para cima .", GALOES);
    return 0;

}
