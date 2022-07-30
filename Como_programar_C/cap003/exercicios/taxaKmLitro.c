#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // inicialização das variáveis
    int litros = get_int("Entre com os litros consumidos (-1 pra finalizar) : ");
    int km = get_int("Entre com os km percorridos (-1 pra finalizar): ");
    float taxa = km / (float)litros;

    // sentinela
    if (litros == -1)
    {
        printf("Programa finalizado\n");
    }
    else if (km == -1)
    {
        printf("Programa finalizado\n");
    }
    else
    {
        printf("A taxa km/litro pra esse tanque foi : %.2f\n", taxa);
    }
}