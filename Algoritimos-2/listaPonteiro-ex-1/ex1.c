
/* 
Crie uma função em C chamada somar que receba dois números inteiros como parâmetros (passagem por
valor) e retorne a soma deles. No programa principal (main), solicite ao usuário dois números, chame a
função somar com esses números e exiba o resultado
 */
#include <stdio.h>

int somar(int num1, int num2);

int main()
{
    int num1, num2, resultado;
    printf("Digite o primeiro número para ser somado com outro: ");      
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    resultado = somar(num1, num2);

    printf("O resultado da soma é de: %d", resultado);
    return 0;
}

int somar(int num1, int num2)
{
    return num1 + num2;
}