#include <stdio.h>

int main() {
    int semestre, opcao;
    
    printf("Digite o semestre que esta cursando: ");
    scanf("%d", &semestre);
    
    if (semestre >= 7) {
        printf("\nMenu de disciplinas:\n");
        printf("1 - Matricular em Jogos Digitais\n");
        printf("2 - Matricular em Design de Jogos\n");
        printf("3 - Matricular em Realidade Virtual\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            printf("Jogos Digitais confirmado\n");
        } else if (opcao == 2) {
            printf("Design confirmado\n");
        } else if (opcao == 3) {
            printf("RV confirmado\n");
        } else {
            printf("Opcao invalida\n");
        }
    } else {
        printf("Voce ainda nao pode se matricular em disciplinas optativas\n");
    }
    
    return 0;
}