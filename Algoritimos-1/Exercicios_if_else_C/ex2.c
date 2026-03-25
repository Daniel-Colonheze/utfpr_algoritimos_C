#include <stdio.h>
#include <locale.h>

int main(){
    int sal;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um valor do seu salário: ");
    scanf("%d", &sal);
    if(sal > 18000){
        printf("você é classe A");
    }else if(sal > 9000){
        printf("você é classe B");
    }else{
        printf("você é classe C ou menos");
    }
    return 0;
}