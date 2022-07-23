#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor = 1;

    for (int i; i < valor; i++)
    {
        printf("%d\n", i);
        valor++;
    } // aqui no corpo da minha estrutura for, eu uso uma instrução para fazer com que a condição nunca se torne verdadeira, gerando assim um loop infinito
}