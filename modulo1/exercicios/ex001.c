#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf(" Listagem de alunos \n\n");
    
    printf(" Nome\t\tNota\n");
    printf("---------------------\n");
    printf(" Luiz Hakan\t10\n");
    printf(" João Victor\t9.5\n");
    printf(" Vovô Aprendiz\t8\n");
    printf("---------------------\n");
}