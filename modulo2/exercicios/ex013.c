#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Primeiro valor : ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("Segundo valor : ");
    scanf("%d", &n2);
    fflush(stdin);

    // &
    int conjuncao = n1 & n2;

    // |
    int disjuncao = n1 | n2;

    // ^
    int disjuncaoE = n1 ^ n2;

    // imprimindo na tela
    printf("%d & %d = %d\n", n1, n2, conjuncao);
    printf("%d | %d = %d\n", n1, n2, disjuncao);
    printf("%d ^ %d = %d\n", n1, n2, disjuncaoE);
}