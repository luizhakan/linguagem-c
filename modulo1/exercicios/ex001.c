#include <stdio.h>
#include <locale.h>

void main()
{
    // setlocale (LC_ALL, "Portuguese");
    // float n;
    // printf("Digite um número real : ");
    // scanf("%f", &n);
    // printf("Número real : %.2f\n", n);

    char nome[] = "Luiz Hakan";
    char sexo = 'M';
    float nota = 9.5;
    char linhas[60] = "--------------------------------------------";
    char *sexoLinhas = "Sexo";
    char *nomeLinhas = "Nome";
    char *notaLinhas = "Nota";

    printf("%s\n", linhas);
    printf("%2s", nomeLinhas);
    printf("%15s", sexoLinhas);
    printf("%20s", notaLinhas);
    printf("\n|%-15s %-17c %0f|\n", nome, sexo);
}