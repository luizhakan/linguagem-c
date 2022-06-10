// switch case
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n1;
    printf("Número : ");
    scanf("%d", &n1);
    fflush(stdin);

    switch (n1)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("Um\n");
        break;
    case 2:
        printf("Dois\n");
        break;
    case 3:
        printf("Três\n");
        break;
    case 4:
        printf("Quatro\n");
        break;
    case 5:
        printf("Cinco\n");
        break;
    case 6:
        printf("Seis\n");
        break;
    case 7:
        printf("Sete\n");
        break;
    case 8:
        printf("Oito\n");
    case 9:
        printf("Nove\n");
        break;
    default:
        break;
    }
}