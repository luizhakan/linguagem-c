// programa de média da turma com repetição controlada por sentinela
#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // inicialização
    int contador, grau, total;
    float media;
    total = 0, contador = 0;

    // processamento
    grau = get_int("Entre com o grau, -1 pra finalizar: ");
    while (grau != -1) // caso não houvesse o -1 como primeiro grau, ele entraria num loop infinito
    {
        total += grau;
        contador++; // enquanto grau não for -1, o loop vai ser executado e contador terá um incremento, só para quando o usuário digitar -1 pra finalizar o loop
        grau = get_int("Entre com o grau, -1 pra finalizar: ");
    }

    // finalização
    if (contador != 0)
    {
        media = /*operador de coerção*/ (float)total / contador;
        printf("A média da turma é %.1f\n", media);
    }
    else
    {
        printf("Nenhum grau foi fornecido!\n");
    }
}