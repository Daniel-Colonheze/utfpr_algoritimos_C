#include <stdio.h>
#include <string.h>

int main()
{
    int N, idade, aptos = 0;
    char doenca[50];

    printf("Digite a quantidade de alunos a serem cadastrados: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("\nCadastro do aluno %d\n", i);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Possui alguma doença que inviabilize a doação? (Sim/Não): ");
        scanf("%s", doenca);

        if (idade >= 18)
        {
            if (strcmp(doenca, "Não") == 0 || strcmp(doenca, "nao") == 0 || strcmp(doenca, "Nao") == 0)
            {
                printf("O aluno pode ser doador de sangue.\n");
                aptos++;
            }
            else
            {
                printf("O aluno nao pode ser doador de sangue.\n");
            }
        }
        else
        {
            printf("O aluno nao pode ser doador de sangue.\n");
        }
    }

    printf("\nTotal de alunos cadastrados: %d\n", N);
    printf("Número de alunos aptos para doação de sangue: %d\n", aptos);

    return 0;
}
