// condições aninhadas
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Primeiro valor : ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("Segundo valor : ");
    scanf("%d", &n2);
    fflush(stdin);

    if (n1 > n2)
    {
        printf("O primeiro valor é maior que o segundo valor");
    }
    else if (n1 < n2)
    {
        printf("\nO primeiro valor é menor que o segundo valor\n");
    }
    else
    {
        printf("\nO primeiro valor é igual ao segundo valor\n");
    }
}