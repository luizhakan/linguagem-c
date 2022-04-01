#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um número inteiro : ");
    scanf("%d", &n);
    printf("\n %d", &n);
}