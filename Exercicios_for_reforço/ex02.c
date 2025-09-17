#include <stdio.h>

int main() {
    int idade, cont;
    char praticaEsportes, participaProjetos;
    float notaBase, mediaFinal;

    for (cont = 1; cont <= 10; cont++) {
        printf("\nAluno %d\n", cont);

        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);

        printf("O aluno pratica esportes? (s/n): ");
        scanf(" %c", &praticaEsportes);

        printf("O aluno participa de projetos? (s/n): ");
        scanf(" %c", &participaProjetos);

        printf("Digite a nota base do aluno: ");
        scanf("%f", &notaBase);

        mediaFinal = notaBase;

        if (praticaEsportes == 's' || praticaEsportes == 'S') {
            if (participaProjetos == 's' || participaProjetos == 'S') {
                mediaFinal += notaBase * 0.20; 
            } else if (idade >= 20) {
                mediaFinal += notaBase * 0.15; 
            }
           
        } else if (idade < 20) {
            mediaFinal = notaBase; 
        }

        printf("A média final do aluno %d é: %.2f\n", cont, mediaFinal);
    }

    return 0;
}