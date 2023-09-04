#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    // switch
    switch (valor)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
    case 7:
        printf("Sábado\n");

    default:
        printf("Valor inválido!\n");
    }
}