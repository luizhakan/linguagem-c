#include <stdio.h> // Diretiva para o pré-processador C usar a biblioteca stdio.h

// /* Primeiro programa em C */
// int somarDoisNumeros(int n1, int n2); // Aqui seria um prototype. Basicamente quando eu defino uma função DEPOIS da função main. Mas se eu defino a função ANTES da main, eu não preciso do prototype.

/**
 * \n - Nova linha
 * \a - Alerta. Faz soar a campainha do sistema
 * \" - faz imprimir aspas duplas
 */

int somarDoisNumeros(int n1, int n2)
{
    return n1 + n2;
}

void condicionalSimples(void)
{
    int num1, num2;

    printf("Entre com dois números inteiros e lhe direi o relacionamento que eles satisfazem\n");
    printf("Diga-me o primeiro número: ");
    scanf("%d", &num1);

    printf("Agora meu nobre, diga-me o segundo número: ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("%d é igual a %d\n", num1, num2);
    if (num1 != num2)
        printf("%d é diferente de %d\n", num1, num2);
    if (num1 < num2)
        printf("%d é menor que %d\n", num1, num2);
    if (num1 > num2)
        printf("%d é maior que %d\n", num1, num2);
    if (num1 <= num2)
        printf("%d é menor ou igual a %d\n", num1, num2);
    if (num1 >= num2)
        printf("%d é maior ou igual a %d\n", num1, num2);
}

void ternario(void)
{
    int n1, n2;
    printf("Dê um número do primeiro ternário: ");
    scanf("%d", &n1);

    printf("Dê um número do segundo ternário: ");
    scanf("%d", &n2);

    printf("%d é %s que %d\n", n1, n1 > n2 ? "maior" : "menor", n2);
}

void repeticaoMediaComWhile(void)
{
    int contador = 0, media, nota, soma = 0;

    while (contador < 4)
    {
        printf("Digite a nota: ");
        scanf("%d", &nota);

        soma = soma + nota;
        contador = contador + 1;
    }

    media = soma / contador;

    printf("Contador: %d\n", contador);
    printf("O total da soma é: %d\n", soma);
    printf("A média é: %d\n", media);
}

void repeticaoComSentinela()
{
    int contador = 0, nota = 0, soma = 0;
    float media;

    printf("Digite as notas. E um número abaixo de 0 (ex: -1) para sair.\n");

    while (nota >= 0)
    {
        printf("Digite a nota: ");
        scanf("%d", &nota);

        if (nota >= 0)
        {
            soma = soma + nota;
            contador = contador + 1;
        }
    }

    if (contador > 0) {
        media = (float)soma / contador; 
        printf("A media e: %.2f\n", media);
    } else {
        printf("Nenhuma nota valida foi digitada.\n");
    }

    printf("Contador rodou %d vezes\n", contador);
    printf("A média é: %.2f\n", media);
}

int main(void)
{
    printf("Bem vindo ao C!\n");
    // int numero1, numero2;

    // printf("Diga o primeiro número: ");
    // scanf("%d", &numero1);

    // printf("Diga o segundo número: ");
    // scanf("%d", &numero2); // O %d diz que o valor a receber é um decimal integer (inteiro), e o & antes do nome da variável indica o lugar onde esse valor está armazenado na memória (é o ponteiro!)

    // printf("Lugar na memória da variável numero1: %p\n", &numero1);
    // printf("Lugar na memória da variável numero2: %p\n", &numero2);

    // printf("\nO resultado de %d + %d é: %d\n", numero1, numero2, somarDoisNumeros(numero1, numero2));
    // printf("");
    // condicionalSimples();
    // printf("");
    // ternario();
    // repeticaoMediaComWhile();

    repeticaoComSentinela();

    return 0;
}

/**
 * == igual a
 * != diferente de
 * > maior que
 * < menor que
 * >= maior ou igual que
 * <= menor ou igual que
 */

/**
 * palavras-chave do C
 * auto
 * break
 * case
 * Char
 * const
 * continue
 * default
 * do
 * double
 * else
 * enum
 * extern
 * float
 * for
 * goto
 * if
 * int
 * long
 * register
 * return
 * short
 * signed
 * sizeof
 * static
 * struct
 * switch
 * typedef
 * uniom
 * unsigned
 * void
 * volatile
 * while
 */