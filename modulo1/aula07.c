#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // lendo números
    // float m;
    // int n;

    // printf("Digite um número real : ");
    // scanf("%f", &m);
    // printf("Digite um número inteiro : ");
    // scanf("%d", &n);
    // printf("Número real : %.2f \n", m);
    // printf("Número inteiro : %d \n", n);

    // lendo caracteres
    // char r;
    // char s;

    // printf("Digite uma letra : ");
    // fflush(stdin);
    // scanf("%c", &r);

    // printf("Digite outra letra : \n");
    // fflush(stdin);
    // scanf("%c", &s);

    // printf("Primeira letra : %c \nSegunda letra : %c", r, s);

    // lendo strings

    char nome[20];
    char endereco[60];
    
    printf("Digite seu nome : ");
    fgets(nome, 20, stdin);

    printf("Endereço : ");
    fgets(endereco, 60, stdin);

    printf("\nNome : %s", nome);
    printf("Endereço : %s", endereco);
}