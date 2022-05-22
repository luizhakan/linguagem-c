// ano bissexto
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int ano;
    printf("Digite um ano qualquer : ");
    scanf("%d", &ano);
    fflush(stdin);

    if (ano % 4 == 0)
    {
        if (ano % 100 == 0)
        {
            if (ano % 400 == 0)
            {
                printf("\n ano %d é um ano bissexto\n", ano);
            }
            else
            {
                printf("\nO ano %d não é um ano bissexto\n", ano);
            }
        }
        else
        {
            printf("\nO ano %d é um ano bissexto\n", ano);
        }
    }
    else
    {
        printf("\nO ano %d não é um ano bissexto\n", ano);
    }
}