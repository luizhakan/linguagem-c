#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // capturar o número
    printf("Digite um número qualquer : ");
    int num;
    scanf("%d", &num);
    fflush(stdin);

    // fórmula par ou impar
    ("%d", num % 2 == 0) ? printf("Par\n") : printf("Ímpar\n");
}