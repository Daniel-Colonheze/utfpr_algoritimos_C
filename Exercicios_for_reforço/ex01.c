#include <stdio.h>
#include <locale.h>

int main() {
    int idade, cadastro, cont;
    char caractere;

    setlocale(LC_ALL, "Portuguese");

    printf("Quantos usuários serão cadastrados? ");
    scanf("%d", &cadastro);

    for (cont = 0; cont < cadastro; cont++) {
        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);

        printf("Digite 's' se você possui alguma doença que inviabiliza doar sangue (ex.: Hepatite B, C, AIDS)\n");
        printf("Caso contrário, digite 'n': ");
        scanf(" %c", &caractere); 

        if (idade > 18) {
            if (caractere == 's') { 
                printf("Essa pessoa foi cadastrada\n");
            } else {
                printf("O cadastro desse usuário falhou\n");
            }
        } else {
            printf("O cadastro desse usuário falhou\n");
        }
    }

    return 0;
}
