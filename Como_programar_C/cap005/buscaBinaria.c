#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int jogando = 1;

    while (jogando)
    {
        int nivel, numeroDeTentativas, numeroAleatorio, chute;

        // escolher o nível de dificuldade
        printf("Escolha o nível de dificuldade:\n");
        printf("1 - Fácil\n");
        printf("2 - Médio\n");
        printf("3 - Difícil\n");
        printf("Ou digite cancelar para sair: ");
        scanf("%d", &nivel);

        // verifica se o usuário cancelou
        if (nivel == 0)
        {
            jogando = 0;
            break;
        }

        // valida a escolha do nível
        while (nivel < 1 || nivel > 3)
        {
            printf("Escolha o nível de dificuldade:\n");
            printf("1 - Fácil\n");
            printf("2 - Médio\n");
            printf("3 - Difícil\n");
            printf("Ou digite cancelar para sair: ");
            scanf("%d", &nivel);

            // verifica se o usuário cancelou durante a validação
            if (nivel == 0)
            {
                jogando = 0;
                break;
            }
        }

        if (!jogando)
        {
            printf("Obrigado por jogar!\n");
            break;
        }

        // define o número de tentativas
        if (nivel == 1)
            numeroDeTentativas = 7;
        else if (nivel == 2)
            numeroDeTentativas = 5;
        else if (nivel == 3)
            numeroDeTentativas = 3;

        // define o número aleatório entre 1 e 100
        srand(time(NULL));
        numeroAleatorio = rand() % 100 + 1;

        // inicia o loop de tentativas
        for (int i = 1; i <= numeroDeTentativas; i++)
        {
            printf("Digite um número entre 1 e 100: ");
            scanf("%d", &chute);

            // verifica se o usuário cancelou o jogo
            if (chute == 0)
            {
                jogando = 0;
                break;
            }

            // verifica se o usuário acertou o número
            if (chute == numeroAleatorio)
            {
                printf("Parabéns! Você acertou!\n");
                int opcao;
                printf("Deseja jogar novamente?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                scanf("%d", &opcao);

                // verifica se o usuário deseja jogar novamente
                if (opcao == 1)
                {
                    jogando = 1;
                }
                else
                {
                    jogando = 0;
                }
                break;
            }
            else if (chute < numeroAleatorio)
            {
                printf("O número é maior que %d\n", chute);
                printf("Tentativa %d de %d\n", i, numeroDeTentativas);
            }
            else if (chute > numeroAleatorio)
            {
                printf("O número é menor que %d\n", chute);
                printf("Tentativa %d de %d\n", i, numeroDeTentativas);
            }

            if (i == numeroDeTentativas)
            {
                printf("Suas tentativas acabaram! O número era %d.\n", numeroAleatorio);

                int opcao;
                printf("Deseja jogar novamente?\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                scanf("%d", &opcao);

                // verifica se o usuário deseja jogar novamente
                if (opcao == 1)
                {
                    jogando = 1;
                }
                else
                {
                    jogando = 0;
                }
            }
        }
    }

    return 0;
}
