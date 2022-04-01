#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numero = rand() % 1000;  // ele vai gerar um número entre 1 e 1000

    printf("Número aleatório : %d\n", numero);
}