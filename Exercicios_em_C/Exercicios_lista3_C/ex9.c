#include <stdio.h>
#include <math.h>

int main(){
    int ALUNOS, GRUPOS, RESTO;
    printf("Informe a quantidade total de alunos na turma: ");
    scanf("%i", &ALUNOS);
    GRUPOS = ALUNOS  / 4;
    RESTO = ALUNOS % 4;
    printf("Quantidade de grupos de 4 alunos formados: %i \n", GRUPOS);
    printf("Quantidade de alunos que ficaram de fora: %i", RESTO);

    return 0;

}
