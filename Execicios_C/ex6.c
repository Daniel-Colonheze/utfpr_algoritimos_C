#include <stdio.h>
#include <locale.h>

int main(){
    int a, b, c;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o primeiro valor do lado de um triângulo: ");
    scanf("%d", &a);
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);
    if(a > (b + c) || b > (a + c) || c > (b + a)){
        printf("não é um triângulo");
    }else{
        printf("é um triângulo");
    }
    return 0;
}