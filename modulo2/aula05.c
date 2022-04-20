#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[25];
    strcpy(nome, "Luiz Hakan");
    printf("Muito prazer %s\n", nome);

    // char maiusculo[] = "luiz hakan";
    // printf("MAIÚSCULO : %s", strupr(maiusculo));

    int tamanho = strlen(nome);
    printf("strlen : O nome \"%s\" tem %d caracteres\n", nome, tamanho);

    char t1[] = "Luiz ";
    char t2[] = "Hakan";

    printf("strcat : %s\n", strcat(t1, t2));
}