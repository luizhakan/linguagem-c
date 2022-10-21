#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float raiz = get_float("Digite um número: ");
    printf("A raiz quadrada de %.2f é %.2f\n", raiz, sqrt(raiz));
}