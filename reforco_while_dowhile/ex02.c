#include <stdio.h>

int main (){
    int num, maior = 0;
    do{
        printf("Digite numero inteiro maior que zero e quando quiser sair do programa digite 0 ou um numero negativo: ");
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }while(num > 0);
    printf("Saindo do programa...");
    printf("O maior numero digitado foi: %d", maior);
    
    return 0;
}