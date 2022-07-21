#include <stdio.h>
#include <locale.h>
#include <cs50.h>
#include <math.h>

void circulo();
void main()
{
    int valor = get_int("Área: ");
    setlocale(LC_ALL, "Portuguese");
    circulo(valor);
}

void circulo(int area){
    int raio = 3.16 * pow(area, area);
    printf("O diâmetro do círculo é : %d\n", raio);
}