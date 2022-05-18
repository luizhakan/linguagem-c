// BONS ALUNOS MERECEM PARABÉNS
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // guardando as notas
    float nota1, nota2;

    // obtendo as notas
    printf("1ª Nota : ");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("2ª Nota : ");
    scanf("%f", &nota2);
    fflush(stdin);

    // calculando média
    float media = (nota1 + nota2) / 2;

    // definindo as condições, notas acima de 7 pra cima recebem parabéns
    if(media >= 7){
        printf("Parabéns! sua média foi %.1f\n", media);
    } else {
        printf("Sua média foi %.1f\n", media);
    }
}