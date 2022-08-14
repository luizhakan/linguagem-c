/*escreva instruções for que imprimam os seguintes valores: 3, 8, 13, 18, 23*/
#include <stdio.h>

void main()
{
    int contador;
    for(contador = 3; contador <= 23; contador += 5)
    printf("%d\n", contador);
}