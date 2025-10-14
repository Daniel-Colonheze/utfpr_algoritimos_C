#include <stdio.h>

int main() {
    int valores[6];
    int i; 
    
    printf("Leitura e Apresentacao Imediata de 6 Valores Inteiros\n");
    for (i = 0; i < 6; i++) {
        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &valores[i]); 
        printf("O valor que voce acabou de digitar (na posicao %d) é: %d\n", i + 1, valores[i]);
    }
    
    return 0;
}