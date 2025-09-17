#include <stdio.h>

int main() {
    int numero, invertido, centena, dezena, unidade;
    
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &numero);
    
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;
    
    invertido = unidade * 100 + dezena * 10 + centena;
    
    printf("Número original: %d\n", numero);
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}