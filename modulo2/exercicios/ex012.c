#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // guardar notas
    float n1, n2, n3, n4;

    // capturar notas
    printf("1ª Nota : ");
    scanf("%f", &n1);
    fflush(stdin);

    printf("2ª Nota : ");
    scanf("%f", &n2);
    fflush(stdin);

    printf("3ª Nota : ");
    scanf("%f", &n3);
    fflush(stdin);

    printf("4ª Nota : ");
    scanf("%f", &n4);
    fflush(stdin);

    // calcular média
    float media = (n1 + n2 + n3 + n4) / 4;
    char ternario[30];
    strcpy(ternario, (media >= 7) ? "APROVADO" : "REPROVADO");

    // imprimir média
    printf("Com a média %.2f, o aluno foi %s\n", media, ternario);
}