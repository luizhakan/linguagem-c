// três valores em ordem
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3;

    printf("1º Número : ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("2º Número : ");
    scanf("%d", &n2);
    fflush(stdin);

    printf("3º Número : ");
    scanf("%d", &n3);
    fflush(stdin);

    if(n1 == n2 && n1 == n3 && n2 == n3){
        printf("\nOs números são iguais\n");
    }
    else if(n1 > n2 && n1 > n3 && n2 > n3){
        printf("\nOs valores em ordem crescentes são %d, %d e %d\n", n1, n2, n3);
    }
    else if (n2 > n1 && n2 > n3 && n1 > n3){
        printf("\nOs valores em ordem crescentes são %d, %d e %d\n", n2, n1, n3);
    }
    else if(n3 > n2 && n3 > n1 && n1 < n2){
        printf("\nOs valores em ordem crescentes são %d, %d e %d\n", n3, n2, n1);
    }
}