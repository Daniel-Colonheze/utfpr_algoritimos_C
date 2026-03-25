#include <stdio.h>
#include <string.h>

int main() {
    char nacionalidade[20], regiao[20];
    
    printf("Voce e brasileiro ou estrangeiro? ");
    scanf("%s", nacionalidade);
    
    if (strcmp(nacionalidade, "brasileiro") == 0) {
        printf("Em qual regiao voce nasceu? ");
        scanf("%s", regiao);
        
        if (strcmp(regiao, "sul") == 0) {
            printf("voce esta acostumado com frio\n");
        } else if (strcmp(regiao, "sudeste") == 0) {
            printf("voce esta acostumado com chuva\n");
        } else if (strcmp(regiao, "centro-oeste") == 0) {
            printf("voce esta acostumado com clima abafado\n");
        } else if (strcmp(regiao, "nordeste") == 0) {
            printf("voce esta acostumado com praias bonitas\n");
        } else if (strcmp(regiao, "norte") == 0) {
            printf("voce esta acostumado com chuvas no começo da tarde\n");
        } else {
            printf("Regiao nao reconhecida\n");
        }
    } else {
        printf("seja bem-vindo ao Brasil\n");
    }
    
    return 0;
}