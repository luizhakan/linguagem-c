// meu peso nos planetas v1.0
#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    float pesoDaPessoa = get_float("Seu peso na terra (kg): ");
    fflush(stdin);

    // peso nos planetas
    float mercurio = pesoDaPessoa * 0.37;
    float venus = pesoDaPessoa * 0.88;
    float marte = pesoDaPessoa * 0.38;
    float jupiter = pesoDaPessoa * 2.64;
    float saturno = pesoDaPessoa * 1.15;
    float urano = pesoDaPessoa * 1.17;
    float netuno = pesoDaPessoa * 1.18;


    printf("\t ESCOLHA UM PLANETA\n");
    printf("\t=====================\n");
    printf("\t1\tMercúrio\n");
    printf("\t2\tVênus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJúpiter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t7\tNetuno\n");
    printf("\t=====================\n");

    int planeta = get_int("Digite sua opção : ");

    switch (planeta)
    {
    case 1:
        printf("--------------------------------------------");
        printf("\nSeu peso no planeta MERCÚRIO, seria %.2f kg", mercurio);
        printf("\n--------------------------------------------\n");
        break;
    case 2:
        printf("--------------------------------------------");
        printf("\nSeu peso no planeta VÊNUS, seria %.2f kg\n", venus);
        printf("--------------------------------------------\n");
        break;
    case 3:
        printf("-------------------------------------------");
        printf("\nSeu peso no planeta MARTE, seria %.2f kg\n", marte);
        printf("-------------------------------------------\n");
        break;
    case 4:
        printf("---------------------------------------------");
        printf("\nSeu peso no planeta JÚPITER, seria %.2f kg\n", jupiter);
        printf("---------------------------------------------\n");
        break;
    case 5:
        printf("--------------------------------------------");
        printf("\nSeu peso no planeta SATURNO, seria %.2f kg\n", saturno);
        printf("--------------------------------------------\n");
        break;
    case 6:
        printf("------------------------------------------");
        printf("\nSeu peso no planeta URANO, seria %.2f kg\n", urano);
        printf("------------------------------------------\n");
        break;
    case 7:
        printf("-----------------------------------");
        printf("\nSeu peso em NETUNO, seria %.2f kg\n", netuno);
        printf("-----------------------------------\n");
        break;
    default:
        break;
    }
}