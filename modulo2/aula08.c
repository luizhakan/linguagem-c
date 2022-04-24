#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n = 8;
    n++;
    printf("n++ : %d\n", n);

    n--;
    printf("n-- %d\n", n);

    // pós incremento/decremento
    int x = 5, y = 3 + ++x; // x = 6 e y = 9; aqui primeiro eu adicionei +1 ao x e depois eu somei y + x
    printf("x : %d\ny : %d", x, y);
}