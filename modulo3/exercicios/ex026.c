// qual é o seu estado?
#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Em qual estado do Brasil você nasceu? ");
    char estado[4];
    scanf("%s", estado);

    if (strcmp(estado, "PE") == 0)
    {
        printf("\nNascido em Pernambuco, você é PERNAMBUCANO, O MELHOR ESTADO DO BRASIL!\n");
    }
    else if (strcmp(estado, "AC") == 0)
    {
        printf("\nNascido em Acre, você é ACREANO!\n");
    }
    else if (strcmp(estado, "AL") == 0)
    {
        printf("\nNascido em Alagoas, você é ALAGOANO!\n");
    }
    else if (strcmp(estado, "AP") == 0)
    {
        printf("\nNascido em Amapá, você é AMAPAENSE!\n");
    }
    else if (strcmp(estado, "AM") == 0)
    {
        printf("\nNascido em Amazonas, você é AMAZONENSE!\n");
    }
    else if (strcmp(estado, "BA") == 0)
    {
        printf("\nNascido em Bahia, você é BAIANO!\n");
    }
    else if (strcmp(estado, "CE") == 0)
    {
        printf("\nNascido em Ceará, você é CEARENSE!\n");
    }
    else if (strcmp(estado, "DF") == 0)
    {
        printf("\nNascido em Distrito Federal, você é BRASILIENSE\n");
    }
}