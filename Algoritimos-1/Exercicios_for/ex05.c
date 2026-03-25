#include <stdio.h>
#include <locale.h>

int main()
{
    int cont;
    setlocale(LC_ALL, "Portuguese");
    for (cont = 1; cont <= 10; cont++)
    {
        if (cont % 2 == 0)
        {
            printf("%d\n", cont);
        }
    }
    return 0;
}
