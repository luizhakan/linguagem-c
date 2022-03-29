// DEFINIÇÃO DE VARIÁVEIS
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade = 19;
    char *nome = "Luiz";
    char *sexo = "Masculino";
    float peso = 65.0;

    printf("%s é do sexo %s, tem %i anos e pesa %.2fKg", nome, sexo, idade, peso);
}