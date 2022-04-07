#include <stdio.h>
#include <locale.h>

void main()
{
    // eu particulamente gosto de trabalhar com números reais
    // módulo/resto de divisão, requer números inteiros
    setlocale(LC_ALL, "Portuguese");
    int a = 3;
    int b = 2;
    int c = a % b;
    printf("%d %% %d = %d\n", a, b, c);

    // divisão
    float d = 3;
    float e = 2;
    float f = d / e;
    printf("%.2f / %.2f = %.2f\n", d, e, f);

    // multiplicação
    float g = 3;
    float h = 3;
    float i = g * h;
    printf("%.2f * %.2f = %.2f\n", g, h, i);

    // subtração
    float j = 7;
    float k = 3;
    float l = j - k;
    printf("%.2f - %.2f = %.2f\n", j, k, l);

    // adição
    float m = 3;
    float n = 2.5;
    float o = m + n;
    printf("%.2f + %.2f = %.2f\n", m, n, o);

    printf("-----FIM-----\n");
}