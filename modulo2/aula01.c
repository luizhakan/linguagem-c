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

    // média
    printf("Nota 1 : ");
    float n1;
    scanf("%f", &n1);
    fflush(stdin);

    printf("Nota 2 : ");
    float n2;
    scanf("%f", &n2);
    fflush(stdin);

    printf("Nota 3 : ");
    float n3;
    scanf("%f", &n3);
    fflush(stdin);

    printf("Nota 4 : ");
    float n4;
    scanf("%f", &n4);
    fflush(stdin);

    float media = (n1 + n2 + n3 + n4) / 4;
    printf("Média : %.2f\n", media);
    printf("-----FIM-----\n");

    // fazendo desconto em porcentagem
    printf("Preço : ");
    float preco;
    scanf("%f", &preco);
    fflush(stdin);

    printf("Desconto : ");
    float desconto;
    scanf("%f", &desconto);
    fflush(stdin);

    float calculoDesconto = preco - (preco * desconto / 100);

    printf("O valor integral é R$%2.f, com o desconto de %2.f%%, fica : R$%2.f\n", preco, desconto, calculoDesconto);
}