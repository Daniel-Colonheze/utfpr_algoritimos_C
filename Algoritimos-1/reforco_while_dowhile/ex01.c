#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char valida;
    float peso, altura, resultado;
    do{
        printf("\nQuer fazer o teste(s/n)?");
        scanf(" %c", &valida);
        if(valida == 's' || valida == 'S'){
        printf("\nDigite seu peso: ");
        scanf("%f", &peso);
        printf("\nDigite sua altura: ");
        scanf("%f", &altura);
        resultado = peso/pow(altura, 2);
        printf("\\nResultado: %.2f", resultado);
        printf("\nDeseja continuar(s/n)? ");
        scanf(" %c", &valida);
    }
    }while(valida == 's' || valida == 'S');
    
    return 0;
}