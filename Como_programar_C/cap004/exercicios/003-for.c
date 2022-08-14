/* escreva instruções for que imprimim os seguintes valores : 20, 14, 8, 2, -4, -10 */
#include <stdio.h>

void main(){
    int contador;
    for(contador = 20; contador >= -10; contador -= 6)
    printf("%d\n", contador);
}