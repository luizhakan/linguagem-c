#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int maisNovo, maisVelho, qtdEntrevistado, idadeInformada;
    int porcentagemMenorIdade, mediaIdade, qtdMenorIdade, somaDaIdade;

    maisNovo = 9999;
    maisVelho = 0;
    qtdEntrevistado = 0;
    qtdMenorIdade = 0;

    while (qtdEntrevistado < 5)
    {
        printf("Digite a sua idade: ");
        scanf("%d", &idadeInformada);
        if (idadeInformada >= maisVelho)
        {
            maisVelho = idadeInformada;
        }
        if (idadeInformada <= maisNovo)
        {
            maisNovo = idadeInformada;
        }
        if (idadeInformada < 18)
        {
            qtdMenorIdade++;
        }
        qtdEntrevistado++;
    }

    porcentagemMenorIdade = (qtdMenorIdade * 100) / qtdEntrevistado;
    mediaIdade = (maisVelho + maisNovo) / 2;

    printf("A maior idade informada foi %d\n", maisVelho);
    printf("A menor idade informada foi %d\n", maisNovo);
    printf("A porcentagem de menores de idade foi %d\n", porcentagemMenorIdade);
    printf("A media de idade foi %d\n", mediaIdade);
}