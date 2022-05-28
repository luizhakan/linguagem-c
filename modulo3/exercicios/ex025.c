// serviço militar v2
#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // estrutura de data
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    printf("Atualmente estamos no ano de %d\n", ano);
    printf("Em que ano você nasceu? ");
    int nascimento;
    scanf("%d", &nascimento);
    fflush(stdin);
    printf("\n----------------------------------------------------\n");

    int idade = ano - nascimento;
    printf("Sua idade é %d anos\n", idade);
    printf("\n----------------------------------------------------\n");

    int alistamento = nascimento + 18;
    int passado = ano - alistamento;
    int futuro = alistamento - nascimento;

    if (nascimento > ano)
    {
        printf("\nVocê é um viajante do tempo?\n");
        printf("\n----------------------------------------------------\n");
    }

    if (idade > 18)
    {
        printf("Seu alistamento foi em %d, já se passaram %d anos\n", alistamento, passado);
        printf("\n----------------------------------------------------\n");
    }
    else if (idade == 18)
    {
        printf("Você tem ou vai fazer 18 esse ano, vá se alistar!");
        printf("\n----------------------------------------------------\n");
    }
    else if (idade < 18 && idade > 0)
    {
        printf("\nSeu alistamento será em %d, faltam %d anos.\n", alistamento, futuro);
        printf("\n----------------------------------------------------\n");
    }
}