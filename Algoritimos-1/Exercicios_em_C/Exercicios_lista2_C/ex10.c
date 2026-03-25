#include <stdio.h> 
#include <math.h>

int main(){
	int cs, f;
	printf("Digite a temperatura atual em farenheits :");
	scanf("%i", &f);
	cs = 5*(f-32)/9;
	printf("O valor convertido em celcius e %i", cs);
	return 0;
}
