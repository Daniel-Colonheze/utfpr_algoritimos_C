#include <stdio.h>
#include <locale.h>

int main()
{
    int cont;
    setlocale(LC_ALL, "Portuguese");
    for (cont = 5; cont <= 15; cont++)
    {
        printf("%d\n", cont);
    }
    return 0;
}
