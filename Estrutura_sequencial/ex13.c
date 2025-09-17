#include <stdio.h>

int main() {
    float massa, aceleracao, tempo, velocidade, comprimento, trabalho;
    
    printf("Digite a massa do aviao (ton): ");
    scanf("%f", &massa);
    printf("Digite a aceleracao (m/s²): ");
    scanf("%f", &aceleracao);
    printf("Digite o tempo (s): ");
    scanf("%f", &tempo);

    massa *= 1000;
    
    velocidade = aceleracao * tempo;
    comprimento = (aceleracao * tempo * tempo) / 2;
    trabalho = (massa * velocidade * velocidade) / 2;

    velocidade *= 3.6;
    
    printf("\nResultados:\n");
    printf("Velocidade atingida: %.2f km/h\n", velocidade);
    printf("Comprimento da pista: %.2f m\n", comprimento);
    printf("Trabalho mecanico: %.2f J\n", trabalho);
    
    return 0;
}