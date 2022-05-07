#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // guardar número
    int n1, d2;

    // capturar número
    printf("Valor : ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("Deslocamento : ");
    scanf("%d", &d2);
    fflush(stdin);

    // calcular deslocamento

    // >>
    int right = n1 >> d2;

    // <<
    int left = n1 << d2;

    // imprimir na tela
    printf("%d >> %d = %d\n", n1, d2, right);
    printf("%d << %d = %d\n", n1, d2, left);
}