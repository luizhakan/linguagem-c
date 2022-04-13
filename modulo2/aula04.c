#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 9, b = 3;
    char *resultado = (a < b) ? "Sim, é menor\n" : "Sim, é maior\n";
    printf("%s", resultado);

    char aluno[30];
    float nota1, nota2, nota3, nota4;

    // aluno
    printf("Nome : ");
    fgets(aluno, 30, stdin);
    fflush(stdin);

    // primeira nota
    printf("1ª Nota : ");
    scanf("%f", &nota1);
    fflush(stdin);

    // segunda nota
    printf("2ª Nota : ");
    scanf("%f", &nota2);
    fflush(stdin);

    // terceira nota
    printf("3ª Nota : ");
    scanf("%f", &nota3);
    fflush(stdin);

    // quarta nota
    printf("4ª Nota : ");
    scanf("%f", &nota4);
    fflush(stdin);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("O aluno %sfoi %s na matéria com a média : %.1f", aluno, (media >= 6) ? "aprovado":"reprovado", media);
}