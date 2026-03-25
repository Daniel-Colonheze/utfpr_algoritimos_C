#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media_ponderada;
    
    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &nota4);
    
    media_ponderada = (nota1*2 + nota2*4 + nota3*6 + nota4*8) / (2+4+6+8);
    
    printf("\nMedia ponderada: %.2f\n", media_ponderada);
    
    return 0;
}