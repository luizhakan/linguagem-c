#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 6;
    a += 6; // a = a + 5;
    printf("A += 6 : %i\n", a);

    a -= 2; // a = a - 2;
    printf("A -= 2 : %i\n", a);

    a /= 2; // a = a /= 2;
    printf("A /= 2 : %i\n", a);

    a %= 2; // a = a %= 2;
    printf("A %%= 2 : %i\n", a);

    printf("OKAY, PROGRAMA FUNCIONAND CORRETAMENTE :)\n");
    printf("[END]");
}