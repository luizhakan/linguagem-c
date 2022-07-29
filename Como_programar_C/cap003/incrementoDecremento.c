/*
considere : int c = 3, d = 5, e = 4, f = 6, g = 12

operador de atribuição | exemplo de expressão | explicação | atribui
    +=                   c += 7                 c = c + 7    10 a c
    -=                   d -= 4                 d = d - 4    1 a d
    *=                   e *= 5                 e = e * 5    20 a e
    /=                   f /= 3                 f = f / 3    2 a f
    %=                   g %= 9                 g = g % 9    3 a g

operador    | exemplo de expressão  | explicação
    ++        ++a                     incrementa 1 dps usa o valor de a
    ++        a++                     usa o valor atual de a e dps incrementa 1
    --        --b                     decrementa 1 e depois usa o valor de b
    --        b--                     usa o valor atual de b e dps decrementa 1
*/
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // criando aqui um caso de loop infinito, só para fins de estudo
    // int a = 2;
    // for(int i = 0; i < a; i++){
    //     printf("%d\n", i);
    //     i--;
    // }
    int c = 5;
    printf("%d\n", c);
    c++; // pós incremento c = 6
    printf("pós incremento: %d\n", c); // pós incremento
    ++c; // pré incremento c = 7
    printf("pré incremento: %d\n\n", c); // pré incremento

    c = 5;
    printf("%d\n", c);
    c--;
    printf("pós decremento: %d\n", c); // pós decremento c = 4
    --c;
    printf("pré decremento: %d\n", c); //  pré decremento c = 3

}
/*
ordem de procedência dos operadores até agora

| operador     |  associatividade     |  tipo  |
()              esquerda pra direita   parênteses
++ -- + -       direita pra esquerda   unário
* ? %           esquerda pra direita   multiplicativo
+ -             esquerda pra direita   aditivo
< <= > >=       esquerda pra direita   relacional
== !=           esquerda pra direita   igualdade
?:              direita pra esquerda   condicional
= += -= *= %=   direita pra esquerda   atribuição
*/