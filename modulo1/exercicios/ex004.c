// Este código terá futuros ajustes
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome1[40], nome2[40], nome3[40];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    // primeira pessoa
    printf("\nCadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome : ");
    fgets(nome1, 40, stdin);
    printf("Sexo [M/F] : ");
    sexo1 = getchar();
    fflush(stdin);
    printf("Nota : ");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("------------------------------\n");

    printf("Primeira pessoa\n");
    printf("Nome : %s\nSexo: %c\nNota: %f\n", nome1, sexo1, nota1);
    printf("------------------------------\n");
    fflush(stdin);

    printf("\nCadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome : ");
    fflush(stdin);
    fgets(nome2, 40, stdin);
    printf("Sexo [M/F] : ");
    sexo2 = getchar();
    fflush(stdin);
    printf("Nota : ");
    scanf("%f", &nota2);
    fflush(stdin);
    printf("Segunda pessoa\n");
    printf("Nome : %s\nSexo: %c\nNota: %f\n", nome2, sexo2, nota2);
    printf("------------------------------\n");
    fflush(stdin);

    printf("\nCadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome : ");
    fgets(nome3, 40, stdin);
    fflush(stdin);
    printf("Sexo [M/F] : ");
    sexo3 = getchar();
    fflush(stdin);
    printf("Nota : ");
    scanf("%f", &nota3);
    fflush(stdin);

    printf("------------------------------\n");
    printf("Segunda pessoa\n");
    printf("Nome : %s\nSexo: %c\nNota: %f\n", nome3, sexo3, nota3);
    printf("------------------------------\n");
    fflush(stdin);
}