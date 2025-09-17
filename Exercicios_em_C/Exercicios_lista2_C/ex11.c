#include <stdio.h> 
int main(){
	int a, b, c;
	printf("Digite o valor do numero inteiro a :");
	scanf("%i", &a);
	printf("Digite o valor do numero inteiro b :");
	scanf("%i", &b);
	c = a;
	a = b;
	b = c;
	printf("Os valores invertidos sao a = %i e b = %i ", a, b);
	return 0;
}
