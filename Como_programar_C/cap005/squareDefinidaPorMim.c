// Função square definida por mim
#include <stdio.h>

int square(int);

void main()
{
    int x;
    for (x = 1; x <= 10; x++)
        printf("%d \n", square(x));
}

int square(int y)
{
    return y * y;
}