// encontrar o maior de três números
#include <stdio.h>
#include <locale.h>

int maximum(int, int, int);
void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("Entre com 3 inteiros: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("O maior número é: %d\n", maximum(a, b, c));
}

int maximum(int x, int y, int z)
{
    int max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    return max;
}