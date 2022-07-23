#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    // inicialização
    int total = 0, contador = 1;

    // processamento
    while (contador <= 10)
    {
    int grau = get_int("Grau %dº: ", contador); // usando a formatação %d para exibir o número do contador no prompt
        total += grau; // enquanto o contador for menor ou igual a 10, eu somo total + grau
        contador++; // e incremento o contador
    }

    // terminação
    int media = total / 10; // no fim eu divido tudo por 10
    printf("Média: %d\n", media); // e imprimo a média da turma :)
}