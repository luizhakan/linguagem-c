/*
operadores de igualdade
== - igual a (operador de igualdade é diferente do operador de atribuição '=')
!= - diferente de

operadores relacionais
> - maior que
< - menor que
>= - maior ou igual a
<= - menor ou igual a
*/
/*
as estruturas condicionais são feitas usando operadores de igualdade e/ou relacionais
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Entre com dois inteiros e lhe direi\n");
    printf("O relacionamento que eles satisfazem: ");
    scanf("%d%d", &num1, &num2); // ler dois inteiros

    if (num1 == num2)
    {
        printf("%d é igual a %d\n", num1, num2);
    }
    if (num1 != num2)
    {
        printf("%d não é igual a %d\n", num1, num2);
    }
    if (num1 < num2)
    {
        printf("%d é menor que %d\n", num1, num2);
    }
    if (num1 > num2)
    {
        printf("%d é maior que %d\n", num1, num2);
    }
    if (num1 <= num2)
    {
        printf("%d é menor ou igual a %d\n", num1, num2);
    }
    if (num1 >= num2)
    {
        printf("%d é maior ou igual a %d\n", num1, num2);
    }

    return 0;
}

/*
ordem de procedência dos operadores
1 - aritméticos
()
* / %
+ -

2 - relacionais
< > <= >=

3 - igualdade
== !=

*/