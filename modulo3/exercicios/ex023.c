// positivo, negativo ou nulo
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Número : ");
    int n1;
    scanf("%d", &n1);
    fflush(stdin);

    if(n1 > 0){
        printf("\nO número %d é positivo\n",n1);
    } else if(n1 < 0){
        printf("\nO número %d é negativo\n", n1);
    } else{
        printf("\nO número %d é nulo\n", n1);
    }
}