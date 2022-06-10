// Super calculadora v1.0
#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1 = get_int("Valor 1 : ");
    fflush(stdin);

    int n2 = get_int("Valor 2 : ");
    fflush(stdin);

    printf("\n--------------------------------\n");
    printf("+\t\tAdição\n");
    printf("-\t\tSubtração\n");
    printf("*\t\tMultiplicação\n");
    printf("/\t\tDivisão");
    printf("\n--------------------------------\n");

    char operador = get_char("Operador : ");

    if(operador == '+'){
        printf("\n%d + %d = %d\n", n1, n2, (n1+n2));
    }
    else if(operador == '-'){
        printf("\n%d - %d = %d\n", n1, n2, (n1 - n2));
    }
    else if(operador == '*'){
        printf("\n%d * %d = %d\n", n1, n2, (n1 * n2));
    }
    else if(operador == '/'){
        printf("\n%d / %d = %d\n", n1, n2, (n1 / n2));
    }
    else{
        printf("Operador não existente na lista...\n");
    }
}