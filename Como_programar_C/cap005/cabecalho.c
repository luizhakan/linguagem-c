#include <stdio.h>
#include <locale.h>
#include <math.h>

int maximum(int, int, int);
int raiz(int);

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    printf("Entre com 3 inteiros: \n");
    scanf("%d%d%d", &a, &b, &c);

    printf("O maior número é: %d\n", maximum(a, b, c));
    printf("A raiz quadrada de %d é %d\n", a, raiz(a));
}

int maximum(int x, int y, int z)
{
    int max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    return max;
}

int raiz(int x)
{
    return sqrt(x);
};

// arquivos de cabeçalho

/*
    Tipo de dados    Especificações de conversão de printf    Especificações de conversão de scanf

    long double           %Lf                                 %Lf
    Double                %f                                  %ff
    float                 %f                                  %f
    unsigned long int     %lu                                 %lu
    long int              %ld                                 %ld
    unsigned int          %u                                  %u
    int                   %d                                  %d
    short                 %hd                                 %hd
    char                  %c                                  %c
*/