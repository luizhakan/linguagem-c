#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 1;
    int b = 2;
    int resultado = (a==b);
    printf("O resultado é %d", resultado);
    // vale ressaltar que true == 1, false == 0
}