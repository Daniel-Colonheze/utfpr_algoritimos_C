#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    printf("\nValores originais:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    temp = a;
    a = b;
    b = temp;
    
    printf("\nValores trocados:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    
    return 0;
}