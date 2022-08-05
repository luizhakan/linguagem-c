/*repetição controlada por contador usando while*/
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador; // inicialização
    while(++contador <= 10)/*condição de repetição e incremento do contador*/
        printf("%d\n", contador);
}