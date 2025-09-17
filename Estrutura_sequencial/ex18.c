#include <stdio.h>
#include <math.h>

int main() {
    float angulo_graus, angulo_radianos;
    
    printf("Digite o angulo em graus: ");
    scanf("%f", &angulo_graus);

    angulo_radianos = angulo_graus * M_PI / 180.0;
    
    printf("\nResultados:\n");
    printf("Seno: %.4f\n", sin(angulo_radianos));
    printf("Cosseno: %.4f\n", cos(angulo_radianos));
    printf("Tangente: %.4f\n", tan(angulo_radianos));
    
    return 0;
}