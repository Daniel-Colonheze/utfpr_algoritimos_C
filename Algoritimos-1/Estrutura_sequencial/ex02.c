#include <stdio.h>
#include <locale.h>

int main()
{
    int anos;
    double segundos, batidas;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    segundos = anos * 365.25 * 24 * 60 * 60;
    batidas = segundos;
    printf("O coração bateu aproximadamente %.0f vezes.\n", batidas);

    return 0;
}
