#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // fazer a variável de controle assumir valores de 7 a 77 em passos de 7
    for (int i = 7; i <= 77; i += 7)
        printf("%d\n", i);
    printf("\n");
    for (int i = 20; i > 2; i -= 2)
        printf("%d\n", i);
    printf("\n");
    // fazer a variável de controle assumir valores de 100 a 1 em passos de -1
    for(int i = 100; i >= 1; i--)
    printf("%d\n", i);
}