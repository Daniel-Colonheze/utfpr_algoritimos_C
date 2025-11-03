#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 15
#define CADEIRAS 100
#define PRECO 10.0

int main() {
    int estadio[FILAS][CADEIRAS];
    int i, j, vazias = 0, inteiras = 0, meias = 0;
    float total = 0;

    srand(time(NULL));

    for(i = 0; i < FILAS; i++) {
        for(j = 0; j < CADEIRAS; j++) {
            estadio[i][j] = rand() % 3;
        }
    }

    for(i = 0; i < FILAS; i++) {
        for(j = 0; j < CADEIRAS; j++) {
            if(estadio[i][j] == 0)
                vazias++;
            else if(estadio[i][j] == 1) {
                inteiras++;
                total += PRECO;
            } else if(estadio[i][j] == 2) {
                meias++;
                total += PRECO / 2;
            }
        }
    }

    printf("Quantidade de cadeiras vazias: %d\n", vazias);
    printf("Quantidade de pagantes inteiras: %d\n", inteiras);
    printf("Quantidade de pagantes meia: %d\n", meias);
    printf("Valor total arrecadado: R$ %.2f\n", total);

    return 0;
}
