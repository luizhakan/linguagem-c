// ALFABETO
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char a;
    printf("Digite uma letra : ");
    scanf("%c", &a);
    fflush(stdin);

    char antecessor = a - 1;
    char sucessor = a + 1;

    printf("Antes da letra \"%c\", temos a  letra \"%c\" e depois temos a letra \"%c\"", a, antecessor, sucessor);
}