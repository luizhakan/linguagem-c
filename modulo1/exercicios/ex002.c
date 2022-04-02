#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("01010101010101010101010101010\n");
    printf(" \\a\t=\tBeep\n");
    printf(" \\n\t=\tNova Linha\n");
    printf(" \\t\t=\tTabulação\n");
    printf(" \\\\\t=\tBarra\n");
    printf(" %%%%\t=\tPorcentagem\n");
    printf(" \\\?\t=\tInterrogação\n");
    printf("01010101010101010101010101010\n");
}