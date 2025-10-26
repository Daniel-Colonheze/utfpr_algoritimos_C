#include <stdio.h>

int main() {
    int i, j;
    int totalInstrucoes = 9; 
    int totalEstagios = 7;   // 7 fases do pipeline
    int tempoMax = totalInstrucoes + totalEstagios - 1; // tempo total (colunas)
    char estagios[7][3] = {"BI", "DI", "CO", "BO", "EI", "EO", "FI"};

    printf("Simulacao simples de Pipeline\n");

    printf("Tempo: \t    ");
    for (i = 1; i <= tempoMax; i++) {
        printf("%3d", i);
    }
    printf("\n");

    for (i = 1; i <= totalInstrucoes; i++) {
        printf("Instrucao %d:", i);

        for (j = 1; j <= tempoMax; j++) {
            if (j >= i && j < i + totalEstagios) {
                printf("%3s", estagios[j - i]);
            } else {
                
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nTotal de ciclos: %d\n", tempoMax);

    int ciclo = 1;
    while (ciclo <= tempoMax) {
        if (ciclo == 1) {
            printf("\n Pipeline comeca no ciclo %d\n", ciclo);
        } else if (ciclo == tempoMax) {
            printf("Pipeline termina no ciclo %d\n", ciclo);
        }
        ciclo++;
    }

    return 0;
}
