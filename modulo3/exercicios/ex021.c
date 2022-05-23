// inverso ou oposto
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número : ");
    int numero;
    scanf("%d", &numero);
    fflush(stdin);

    // inverso ou oposto
    float inverso = 1 / numero;
    int oposto = numero - numero * 2;

    numero > 0 ? printf("O inverso de %.d é %f", numero, inverso) : printf("O oposto de %.d é %d", numero, oposto);
}