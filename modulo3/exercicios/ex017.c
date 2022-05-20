// Qual a minha idade?
#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // estrutura de datação
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    // capturando valores
    printf("Qual ano você nasceu? ");
    int minhaData;
    scanf("%d", &minhaData);
    fflush(stdin);

    // calculando a idade
    int minhaIdade = ano - minhaData;

    // se a pessoa tiver 65 anos ou mais, fila preferencial
    if (minhaIdade >= 65)
    {
        printf("\nVocê tem %d anos, certo?\n", minhaIdade);
        printf("DIRIJA-SE A FILA PREFERENCIAL!\n");
    }
    else
    {
        printf("\nVocê tem %d anos, certo?\n", minhaIdade);
        printf("Bem vindo!\n");
    }
}