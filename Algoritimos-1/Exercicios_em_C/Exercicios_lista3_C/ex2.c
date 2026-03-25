#include <stdio.h> 
#include <math.h>

int main(){
	float r, A;
 	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	A = M_PI * pow(r, 2);
	printf("A area dessa circuferencia e: %.2f", A);
	return 0; 
}
