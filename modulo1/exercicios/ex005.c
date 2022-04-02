#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numeroRandom = rand() % 5;
    int numeroDoUser;

    printf("Digite um número de 0 a 5 e veja qual o número que a máquina gerou : ");
    scanf("%d", &numeroDoUser);
    printf("Seu número : %d\t Número da máquina : %d\n", numeroDoUser, numeroRandom);
}