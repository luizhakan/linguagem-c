/*fazendo um loop de contador usando do/while*/
#include <stdio.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL, "Portuguese");
int contador = 1;
do
{
    printf("%d\n", contador);
} while (++contador <= 10); /*neste caso aqui ele vai imprimir o contador até a instrução ser falsa*/

printf("\n");
contador = 1;
do
{
    printf("%d\n", contador);
} while (++contador > 10); /*neste caso aqui ele executa a instrução 1 vez porque a condição é falsa*/
}