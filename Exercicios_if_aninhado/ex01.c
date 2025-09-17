#include <stdio.h>

int main() {
    float altura;
    int idade;
    
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (altura < 1.6) {
        if (idade < 5) {
            printf("Pode brincar no pula-pula e Casinha\n");
        } else if (idade >= 5 && idade <= 8) {
            printf("Pode brincar na prancha do pirata e piscina de bolinhas\n");
        } else {
            printf("Pode brincar de pebolim, ping-pong e basquete\n");
        }
    } else {
        printf("Voce e muito grande para entrar no parque\n");
    }
    
    return 0;
}