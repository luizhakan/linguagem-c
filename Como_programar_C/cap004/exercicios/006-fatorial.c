/* fatorial */
#include <stdio.h>
#include <cs50.h>

int fac();
void main()
{
    int contador = 1, valor = get_int("Valor : ");
    fac(valor);
}

int fac(int n)
{
    int fat = 1;
    for(fat; n > 1; n = n - 1)
    fat = fat *n;
    return printf("Fatorial calculado: %d\n", fat);
}