#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 9;
    int b = 3;
    int resultado = a < b? printf("Sim, é menor"): printf("Sim, é maior");

}