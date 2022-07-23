#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int produto = get_int("Valor: ");
    while (produto <= 1000)
    {
        printf("%d\n", produto = 2 * produto);
    }
}