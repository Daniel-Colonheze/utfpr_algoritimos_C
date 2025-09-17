#include <stdio.h>
#include <locale.h>

int main(){
    float temp;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a temperatura da água de um recipiente em Célsius:");
    scanf("%f", &temp);
    if( temp > 100){
        printf("A água está em estado de vapor");
    }else if(temp > 0){
        printf("A água está em estado líquido");
    }else{
        printf("A água está em estado sólido");
    }
    return 0;
}