#include <stdio.h>

int main() {
    int senha, tipo;
    
    printf("Digite o numero da senha: ");
    scanf("%d", &senha);
    
    printf("\nMenu:\n");
    printf("1 - Prioridade\n");
    printf("2 - Aposentado\n");
    printf("3 - Comum\n");
    printf("Escolha o tipo: ");
    scanf("%d", &tipo);
    
    if (senha < 100) {
        printf("aguarde para ser atendido\n");
    } else {
        if (tipo == 1) {
            printf("Voce sera reagendado para amanha\n");
        } else if (tipo == 2) {
            printf("Voce sera reagendado para depois de amanha\n");
        } else if (tipo == 3) {
            printf("Voce deve tentar outro dia\n");
        } else {
            printf("Tipo invalido\n");
        }
    }
    
    return 0;
}