#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // inicialização das variáveis
    int conta = get_int("Entre com o número da conta: ");
    float saldoInicial = get_float("Entre com o saldo devedor inicial : ");
    float totalCobrancas = get_float("Entre com o total de cobranças : ");
    float creditos = get_float("Entre com o total de créditos : ");
    float limiteCredito = get_float("Entre com o limite de crédito : ");

    // soma pra construção da lógica
    saldoInicial += totalCobrancas - creditos;

    // condição do limite de crédito
    if (limiteCredito <= saldoInicial)
    {
        printf("Conta: %d\nLimite de crédito: R$%.2f\nSaldo: R$%.2f\n", conta, limiteCredito, saldoInicial);
        printf("Limite de crédito excedido!\n");
    }
    else
    {
        printf("Conta: %d\nLimite de crédito: R$%.2f\nSaldo: R$%.2f\n", conta, limiteCredito, saldoInicial);
    }
}