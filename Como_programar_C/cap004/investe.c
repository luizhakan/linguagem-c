#include <stdio.h>

int main()
{
    double investimento = 1000.0; // Investimento inicial
    double taxa = 0.05;           // Taxa de juros de 5%

    // Loop para calcular a quantia na conta ao longo de 10 anos
    for (int ano = 1; ano <= 10; ano++)
    {
        double juros = investimento * taxa;                                               // Calcula o valor dos juros
        investimento += juros;                                                            // Adiciona o valor dos juros ao investimento
        printf("Ao final do ano %d, a quantia na conta é de $%.2f\n", ano, investimento); // Imprime o resultado
    }

    return 0;
}
