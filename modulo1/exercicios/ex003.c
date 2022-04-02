#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int idade;
    float peso;

    printf("Nome : ");
    fgets(nome, 20, stdin);
    printf("Idade : ");
    scanf("%d", &idade);
    printf("Peso : ");
    scanf("%f", &peso);

    printf("------------------------------------");
    printf("\nMuito prazer, %sVocê tem %d anos e pesa %.2f KG\nFIM\n", nome, idade, peso);
    printf("------------------------------------\n");

}