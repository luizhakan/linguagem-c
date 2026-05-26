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

int main(void)
{
    printf("Bem vindo ao C!\n");
    int numero1, numero2;

    printf("Diga o primeiro número: ");
    scanf("%d", &numero1);

    printf("Diga o segundo número: ");
    scanf("%d", &numero2); // O %d diz que o valor a receber é um decimal integer (inteiro), e o & antes do nome da variável indica o lugar onde esse valor está armazenado na memória (é o ponteiro!)

    printf("Lugar na memória da variável numero1: %p\n", &numero1);
    printf("Lugar na memória da variável numero2: %p\n", &numero2);

    printf("\nO resultado de %d + %d é: %d\n", numero1, numero2, somarDoisNumeros(numero1, numero2));
    printf("");
    condicionalSimples();

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
