// Consumidor ganha 10% de desconto
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // guardando valores
    float compra, desconto = 10;

    // capturando o valor da compra
    printf("Valor total da compra : ");
    scanf("%f",&compra);
    fflush(stdin);

    // calculando o desconto
    float CalculoDesconto = compra - (compra * desconto / 100);

    // se a compra for maior ou igual que 500, 10% de desconto, senão, sem desconto
    if(compra >= 500){
        printf("Por fazer mais de R$ 500 em compras, você receberá %.2f%% de desconto. Valor total a ser pago : R$%.2f\n", desconto, CalculoDesconto);
        printf("Volte sempre!\n");
    } else {
        printf("Valor da compra : R$%.2f, volte sempre!\n", compra);
    }
}