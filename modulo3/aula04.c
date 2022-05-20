#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um valor : ");
    scanf("%d", &n);
    fflush(stdin);

    if (n % 2 == 0)
    {
        printf("\n%d é PAR\n", n);
    }
    else
    {
        printf("\n%d é IMPAR\n", n);
    };
}