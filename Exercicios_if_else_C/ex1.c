#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL,"Portugues");
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    if(num > 0){
        printf("Valor positivo");
    }else if(num < 0){
        printf("Valor negativo");
    }else{
        printf("Valor neutro");
    }
    return 0;
}