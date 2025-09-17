#include <stdio.h> 
#include <math.h>

int main(){
	float n1, n2, n3, n4, media;
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &n1);
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &n2);
	printf("Digite a nota da terceira prova: ");
	scanf("%f", &n3);
	printf("Digite a nota da quarta prova: ");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4)/ 4;
	printf("A media do aluno dessas 4 provas e: %.2f", media);
	return 0;
}		
