#include <stdio.h>
#include <locale.h>

int main(){
    int idade;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a sua idade: ");
    scanf("%i", &idade);
    if(idade >= 65){
        printf("Você está na melhor idade");
    }else if(idade >= 40){
        printf("você está na meia idade");
    }else if(idade >= 30){
        printf("você é adulto");
    }else if(idade >= 18){
        printf("você é adulto joven");
    }else if(idade >= 12){
        printf("você é adolescente");
    }else if(idade >= 2){
        printf("você é criança");
    }else{
        printf("você é bebê");
    }
    return 0;
}