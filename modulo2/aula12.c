#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n = 43 >> 3;
    printf("O resultado é : %d\n", n);
}