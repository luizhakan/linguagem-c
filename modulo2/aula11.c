#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n = 18 | 19;
    printf("Resultado : %d", n);
}