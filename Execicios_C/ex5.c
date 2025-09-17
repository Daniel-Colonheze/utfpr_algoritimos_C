#include <stdio.h>
#include <locale.h>
#include <string.h> 

int main()
{
    char genero[2];
    int idade, anosT;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o seu sexo, (m) para masculino e (f) para feminino: ");
    scanf("%s", genero);
    printf("Digite os anos que você já trabalhou: ");
    scanf("%d", &anosT);
if(strcmp(genero, "m") == 0 && anosT >= 30 && idade > 65 || strcmp(genero, "f") == 0 && anosT >= 25 && idade > 60){
        printf("Você pode se aposentar");
    }else{
        printf("Você não pode se aposentar");
    }
    
    return 0;
}
