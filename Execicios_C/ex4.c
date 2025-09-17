#include <stdio.h>
#include <locale.h>
#include <string.h> 

int main()
{
    char senha[20];
    char chefe[20]; 
    setlocale(LC_ALL, "Portuguese");

    printf("Digite qual é o seu cargo na empresa: ");
    scanf("%s", chefe); 

    printf("Digite a senha: ");
    scanf("%s", senha);
        
    if (strcmp(chefe, "chefe") == 0 && strcmp(senha, "123456") == 0) {
        printf("Login realizado com sucesso!\n");
    } else {
        printf("Usuário e/ou senha incorretos.\n");
    }

    return 0;
}
