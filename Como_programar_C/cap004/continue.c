/*usando continue em uma estrutura for*/
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    for (x = 1; x <= 10; x++)
    {
        if (x == 5)
        {
            continue; // ignora o código restante se x for igual a 5
        }
            printf("%d\n", x);
    }
    printf("Continue usado para ignorar a impressão do valor 5\n");
}