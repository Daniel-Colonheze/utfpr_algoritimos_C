#include <stdio.h>
#include <locale.h>

int main()
{
    int senha;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a senha: ");
    scanf("%d", &senha);
    while (senha != 123456)
    {
        printf("Senha inválida\n");
        printf("Digite novamente a senha: ");
        scanf("%d", &senha);
        if (senha = 123456)
        {
            printf("\nSenha correta,. Seja bem vindo");
        }
    }
    return 0;
}