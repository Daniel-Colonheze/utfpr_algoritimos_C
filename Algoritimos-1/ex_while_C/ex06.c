#include <stdio.h>

int main()
{
    int opcao;
    do
    {
        printf("\nPokedex:\n");
        printf("1 - Pikachu\n");
        printf("2 - Bulbassauro\n");
        printf("3 - Charmander\n");
        printf("0 - Sair do pokedex\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Pokemon eletrico da categoria rato\n");
            break;
        case 2:
            printf("Pokemon de grama da categoria semente\n");
            break;
        case 3:
            printf("Pokemon de fogo da categoria lagarto\n");
            break;
        case 0:
            printf("Saindo do Pokedex...\n");
            break;
        default:
            printf("Pokemon nao cadastrado. Ha 890 Pokemons! Temos que pegar!\n");
        }
    } while (opcao != 0);
    return 0;
}
