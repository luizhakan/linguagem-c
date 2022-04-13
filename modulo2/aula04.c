#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 9;
    int b = 3;
    char* resultado = (a < b)? "Sim, é menor": "Sim, é maior";
    printf("%s", resultado);

}