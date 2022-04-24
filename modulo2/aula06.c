#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 5, b = 4, c = 2;
    printf("%s", a > b || a < c && c !=4 ? "Verdadeiro" : "Falso");
            // v || f && v = v
}