#include <stdio.h>
#include <locale.h>

int main(){
    float alt, imc, massa;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a sua altura (metros): ");
    scanf("%f", &alt);
    printf("Digite a sua massa (kg): ");
    scanf("%f", &massa);
    imc = massa/(alt * alt);
    if(imc < 17){
        printf("Muito abaixo do peso");
    }else if(imc < 18.5){
        printf("Abaixo do peso");
    }else if(imc < 25){
        printf("Peso normal");
    }else if(imc < 30){
        printf("Acima do peso");
    }else if(imc < 35){ 
        printf("Obesidade 1");
    }else if(imc < 40){
        printf("Obesidade 2");
    }else{
        printf("Obesidade 3(mórbida)");
    }
    return 0;
}