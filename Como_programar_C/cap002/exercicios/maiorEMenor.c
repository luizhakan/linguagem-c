#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1 = get_int("1º : ");
    int n2 = get_int("2º : ");
    int n3 = get_int("3º : ");
    int n4 = get_int("4º : ");
    int n5 = get_int("5º : ");

    int menor, maior;

    if (n1 > n2)
    {
        maior = n1;
        menor = n2;
    }
    else if (n2 > n1)
    {
        maior = n2;
        menor = n1;
    }

    if (n3 > maior)
    {
        maior = n3;
    }
    else if (n3 < menor)
    {
        menor = n3;
    }

    if (n4 > maior)
    {
        maior = n4;
    }
    else if (n4 < menor)
    {
        menor = n4;
    }

    if (n5 > maior)
    {
        maior = n5;
    }
    else if (n5 < menor)
    {
        menor = n5;
    }

    printf("O maior número é : %d e o menor : %d\n", maior, menor);
}