#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);

    struct tm *data;
    data = localtime(&t);
    int dia = data->tm_mday;
    int mes = data->tm_mon + 1;
    int ano = data->tm_year + 1900;

    int hora = data->tm_hour;
    int minutos = data->tm_min; 

    printf("%d/%d/%d %d:%d\n", dia, mes, ano, hora, minutos);
}