#include <stdio.h>
#include <locale.h>

int main()
{
    int idade;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a sua idade atual: ");
    scanf("%d", &idade);
    if(idade >= 18 && idade <= 65 ){
        printf("Você é obrigado a votar");
    }else{
        printf("você não é obrigado a votar");
    }

    return 0;
}

