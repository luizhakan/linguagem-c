#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador = 1;
    int quantidadeResultados = get_int("Quantos resultados serão contados? ");
    int aprovados = 0;
    int reprovados = 0;

    while (contador <= quantidadeResultados)
    {
        printf("Resultado %d de %d\n", contador, quantidadeResultados);
        float resultado = get_float("Entre com o resultado 1 (Aprovado) - 2 (Reprovado) : ");
        if (resultado == 1)
        {
            aprovados++;
            contador++;
        }
        else if (resultado == 2)
        {
            reprovados++;
            contador++;
        }
        else
        {
            printf("Resultado %d de %d\n", contador, quantidadeResultados);
            float resultado = get_float("Entre com o resultado 1 (Aprovado) - 2 (Reprovado) : ");
        }
    }
    printf("Quantidade de alunos(as) aprovados(as) : %d\n", aprovados);
    printf("Quantidade de alunos(as) reprovados(as) : %d\n", reprovados);

    if(aprovados >= 8){
        printf("Devido ao número mínimo de alunos aprovados, será cobrada uma taxa escolar\n", aprovados);
    }
}