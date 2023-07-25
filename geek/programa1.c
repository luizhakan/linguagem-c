// Aula sobre variáveis
#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main(){ // a chave delimita um bloco de código
    setlocale(LC_ALL, "Portuguese");
    // declarando variáveis
    // int idade;

    // declarando e inicializando
    int idade = 0;


    // Função para escrever algo na saída padrão (console)
    printf("Olá Luiz!\n"); // o ponto e vírgula finaliza o comando
    printf("Qual sua idade? ");

    // receber dados
    scanf("%d", &idade);

    printf("Sua idade é: %d anos\n", idade);

} // fim do bloco