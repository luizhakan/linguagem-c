// SERVIÇO MILITAR
#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    // estrutura de datação
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;

    // capturando a idade
    printf("Em qual ano você nasceu? ");
    int anoNascimento;
    scanf("%d", &anoNascimento);
    fflush(stdin);

    // calculando a idade
    int idade = ano - anoNascimento;

    // saída de dados
    printf("\nEstamos no ano de %d\n", ano);
    // se tiver de 18 pra cima, espero que tenha se alistado, se não, ainda não pode se alistar
    if(idade >= 18){
        printf("\nVocê tem %d anos, espero que já tenha se alistado!\n", idade);
    } else{
        printf("\nVocê tem %d anos, ainda não pode votar\n", idade);
    };
}