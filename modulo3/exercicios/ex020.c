// preço da passagem
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("====== TABELA DE PREÇOS ======");
    printf("\nViagens até 200km\t\tR$0.50/km");
    printf("\nViagens apartir de 200km\tR$0.35/km\n");
    printf("-----------------------------------------\n");

    printf("Distância total da viagem, em km : ");
    float distancia;
    scanf("%f", &distancia);
    fflush(stdin);
    float precoAte200 = distancia * 0.50;
    float precoAcimaDe200 = distancia * 0.35;

    if (distancia < 200)
    {
        printf("\nUma viagem de %.2f km vai custar R$0.50/km\n", distancia);
        printf("Valor total: R$%.2f\n", precoAte200);
    }
    else if (distancia >= 200)
    {
        printf("\nUma viagem de %.2f km vai custar R$0.35/km\n", distancia);
        printf("Valor total: R$%.2f\n", precoAcimaDe200);
    }
}