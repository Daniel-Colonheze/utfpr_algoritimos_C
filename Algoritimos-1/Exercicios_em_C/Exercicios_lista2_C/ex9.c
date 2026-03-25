#include <stdio.h> 

int main(){
	float cs, f;
	printf("Digite a temperatura atual em gruas celsius: ");
	scanf("%f", &cs);
	f = (9*cs/5) + 32;
	printf("O valor convertido em farenheits e %.2f", f);
	return 0;
}
