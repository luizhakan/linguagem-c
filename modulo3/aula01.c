#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    int vel;
    printf("Velocidade : ");
    scanf("%d", &vel);
    fflush(stdin);

    if(vel > 80){
        printf("Com a velocidade em %dkm/h MULTADO\n", vel);
    } else {
        printf("Velocidade permitida, dirija com segurança :)\n");
    } 

    printf("Se beber, não dirija\n");
}