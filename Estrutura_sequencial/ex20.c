#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float raio, comprimento, area, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    comprimento = 2 * PI * raio;
    area = PI * pow(raio, 2);
    volume = (4.0/3.0) * PI * pow(raio, 3);
    
    printf("\nResultados:\n");
    printf("Comprimento: %.4f\n", comprimento);
    printf("Area: %.4f\n", area);
    printf("Volume: %.4f\n", volume);
    
    return 0;
}