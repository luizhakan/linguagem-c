// PREÇO DO PRODUTO
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco;
    float valorDesconto;

    printf("Preço do produto : ");
    scanf("%f", &preco);
    fflush(stdin);

    printf("Porcentagem do desconto : ");
    scanf("%f", &valorDesconto);
    fflush(stdin);

    float desconto = preco - (preco * valorDesconto / 100);

    printf("O produto com o preço de R$%.2f, com o desconto de %.2f%%, o preço final é : R$%.2f", preco, valorDesconto, desconto);
}