// ordem em dois números
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2;
    printf("1º número : ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("2º número : ");
    scanf("%d", &n2);
    fflush(stdin);

    if (n1 > n2)
    {
        printf("\nOs números em ordem são %d e %d\n", n1, n2);
    } else if(n1 < n2){
        printf("\nOs números em ordem são %d e %d\n", n2, n1);
    } else{
        printf("\nOs dois números são iguais\n");
    }
    
}