// preço por época (porcentagem)
#include <stdio.h>
#include <locale.h>
#include <cs50.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int preco = get_int("Preço do produto : ");
    printf("ESCOLHA UMA ÉPOCA");
    printf("\n=====================================\n");
    printf("1\tCarnaval [+10%%]\n");
    printf("2\tFérias escolares [+20%%]\n");
    printf("3\tDia das crianças [+5%%]\n");
    printf("4\tBlack friday [-30%%]\n");
    printf("5\tNatal [-5%%]");
    printf("\n=====================================\n");
    int opcao = get_int("Digite sua opção => ");
    printf("-----------------------------------------------------------");
    switch (opcao)
    {
    case 1:
        printf("\nNo CARNAVAL, o preço do produto vai para R$ %d\n", (preco + (preco * 10 / 100)));
        break;
    case 2:
        printf("\nNas ferias escolares, o preço do produto vai para R$ %d\n", (preco + (preco * 20 / 100)));
        break;
    case 3:
        printf("\nNo dia das crianças, o preço do produto vai para R$ %d\n", (preco + (preco * 5 / 100)));
        break;
    case 4:
        printf("\nNa Black Friday, o preço do produto vai para R$ %d\n", (preco - (preco * 30 /100)));
        break;
    case 5:
    printf("\nNo Natal, o preço do produto vai para R$ %d\n", (preco - (preco * 5 / 100)));
        break;    
    default:
        printf("\nEm épocas assim, mantemos os preços\n");
        break;
    }
        printf("-----------------------------------------------------------\n");
}