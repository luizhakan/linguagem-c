// fazendo calculo de juros compostos
// fórmula : a = p(l + r)^n
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
setlocale(LC_ALL, "Portuguese");
    int ano;
    double quantia, principal = 1000.0, taxa = .1365;
    printf("%4s%21s\n", "Ano", "Saldo na conta");
    
    for(ano = 1; ano <= 10; ano++){
    quantia = principal * pow(1 + taxa, ano);
    printf("%4d%21.2f\n", ano, quantia);
    }
}