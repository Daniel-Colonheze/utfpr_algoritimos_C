#include <stdio.h>
#include <locale.h>

int main()
{
    int cont = 1;
    setlocale(LC_ALL, "Portuguese");
    while (cont <= 6)
    {
        printf("%d\n.", cont);
        cont = cont + 1;
    }
    return 0;
}