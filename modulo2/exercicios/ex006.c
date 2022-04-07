// ANTECESSOR E SUCESSOR
#include <stdio.h>
#include <locale.h>
void main()

{
    setlocale(LC_ALL, "Portuguese");
    printf("Número : ");
    int n1;
    scanf("%d", &n1);
    int antecessor = n1 -1;
    int sucessor = n1 + 1;
    printf("Número : %d\nAntecessor : %d\nSucessor : %d\n", n1, antecessor, sucessor);
}