/*tabuada usando estrutura for*/
#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // loop
    for (int contador = 1, valor = get_int("Valor: "); contador <= 10; contador++)
        printf("%d x %d = %d\n", valor, contador, valor * contador);
}