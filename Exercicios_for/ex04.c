#include <stdio.h>
#include <locale.h>

int main()
{
    int cont;
    setlocale(LC_ALL, "Portuguese");
    for (cont = 15; cont >= 5; cont--)
    {
        printf("%d\n", cont);
    }
    return 0;
}
