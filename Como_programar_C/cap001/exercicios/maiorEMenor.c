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

    // VOU IMPLEMENTAR UM LOOP COM ISSO AQUI
    float menor = FLT_MIN;
    float maior = FLT_MAX;
    // ENTÃO PRECISO ESTUDAR MAIS PARA PODER SOLUCIONAR ISSO DA MANEIRA MAIS PERFORMÁTICA NA LINGUAGEM C

    

    if (n1 < n2)
    {
        menor = n1;
    }
    else if (n2 < n3)
    {
        menor = n2;
    }
    else if (n3 < n4){
        menor = n3;
    } else if(n4 < n5){
        menor = n4;
    }

    if(n1 > n2){
        maior = n1;
    } else if(n2 > n3){
        maior = n2;
    } else if(n3 > n4){
        maior = n3;
    } else if (n4 > n5){
        maior = n4;
    }

    printf("O maior número é : %d e o menor : %d\n", maior, menor);
}