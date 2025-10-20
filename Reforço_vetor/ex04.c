#include <stdio.h>

int main() {
    int n, i, maior, pos;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    int idade[n];
    for (i = 0; i < n; i++) {
        printf("Idade do aluno %d: ", i);
        scanf("%d", &idade[i]);
    }
    maior = idade[0];
    pos = 0;
    for (i = 1; i < n; i++) if (idade[i] > maior) { maior = idade[i]; pos = i; }
    printf("Aluno mais idoso: %d anos, posicao %d\n", maior, pos);
    return 0;
}
