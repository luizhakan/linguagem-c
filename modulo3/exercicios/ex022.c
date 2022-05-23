// dá pra ver o filme?
#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("================== Cinema Kinoplex ==================\n");
    printf("- Horário do filme : 19h - Preço do ingresso : R$20 -\n");
    printf("-----------------------------------------------------\n");

    int preco = 20;

    printf("Quanto de dinheiro você tem? ");
    float dinheiro;
    scanf("%f", &dinheiro);
    fflush(stdin);

    // estrutura de horario
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int hora = data->tm_hour;
    int minutos = data->tm_min;
    printf("Agora são %d:%d", hora, minutos);

    dinheiro >= preco ? printf("\nVocê consegue comprar o ingresso!\n") : printf("\nVocê não consegue comprar o ingresso!\n");
}