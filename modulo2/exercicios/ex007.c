// DOBRO E TERÇA PARTE
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número : ");
    float numero;
    scanf("%f", &numero);
    float dobro = numero * 2;
    float tercaParte = (float)numero / 3;

    printf("Número %.2f, dobro é %.2f e a terça parte é %.2f", numero, dobro, tercaParte);
}