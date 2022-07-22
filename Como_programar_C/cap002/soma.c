/*Programa de soma*/
#include <stdio.h> /*(standard input/output headerfile). As linhas que começam com # são processadas pelo pré-processador antes de o programa ser compilado*/
/*Embora a inclusão de <stdio.h> seja opcional, ela deve ser feita em todos os programas em C que usam funções de entrada e saída da biblioteca padrão*/
#include <math.h> /*Para compilar corretamente pelo gcc, tem que usar o -lm antes do -o*/

int main(){
    double inteiro1, inteiro2, soma;
    printf("Primeiro número: ");
    scanf("%lf", &inteiro1); /*Ao executar o scanf, o computador espera o usuário fornecer um valor para a variável*/

    printf("Segundo número: ");
    scanf("%lf", &inteiro2); /*o %d indica que o dado que deve ser obtido é um inteiro. o & é um operador de endereço, ele dirá para o compilador onde a variável inteiro2 está localizada na memória*/
    /*por parecer um diálogo, esta interação é chamada de computação conversacional ou computação interativa*/
    soma = inteiro1 + inteiro2;
    double power = pow(inteiro1, inteiro2);
    printf("%.1lf + %.1lf = %.1lf\n", inteiro1, inteiro2, soma);
    printf("Resultado da potenciação: %.1lf\n", power);
    
    return 0;
}

/*
+ - Adiçãoj
- - Subtração
* - Multiplicação
/ - Divisão
% - Resto (módulo)
() - Parenteses
*/
/*
Ordem de precedência
1 - ()
2 - * / % da esquerda pra direita
3 - + - da esquerda pra direita
*/