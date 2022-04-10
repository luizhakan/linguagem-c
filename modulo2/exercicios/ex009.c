// MÉDIA DO ALUNO
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // VARÍAVEL
    float nota1, nota2, nota3, nota4;

    // NOTA 1
    printf("1ª Nota : ");
    scanf("%f", &nota1);
    fflush(stdin);

    // NOTA 2
    printf("2ª Nota : ");
    scanf("%f", &nota2);
    fflush(stdin);

    // NOTA 3
    printf("3ª Nota : ");
    scanf("%f", &nota3);
    fflush(stdin);

    // NOTA 4
    printf("4ª Nota : ");
    scanf("%f", &nota4);
    fflush(stdin);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Nota do aluno : %.2f", media);
}