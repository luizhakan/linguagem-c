/* escreva um programa que some uma sequência de inteiros, o primeiro valor lido com especifíca o número de valores que vão ser fornecidos. */
/* exemplo: 5 100 200 300 400 500 */
#include <stdio.h>
#include <cs50.h>

void main()
{
    int contador = 1, valores = get_int("Digite um valor: ");
    for (contador; contador <= valores; contador++)
        printf("%d\n", contador * 100);
}