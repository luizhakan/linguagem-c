#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char* strupr(char* s){
    char* tmp = s;

    for(;*tmp;++tmp){
        *tmp = toupper((unsigned char)*tmp);
    }
    return s;
}

char* strlwr(char* s){
    char* tmp = s;

    for(;*tmp;++tmp){
        *tmp = tolower((unsigned char)*tmp);
    }
    return s;
}

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[25];
    strcpy(nome, "Luiz Hakan");
    printf("Muito prazer %s\n", nome);

    char maiuscula[] = "luiz";
    printf("MAIÚSCULA : %s\n", strupr(maiuscula));

    char minuscula[] = "LUIZ";
    printf("minúscula : %s\n", strlwr(minuscula));

    int tamanho = strlen(nome);
    printf("strlen : O nome \"%s\" tem %d caracteres\n", nome, tamanho);

    char t1[] = "Luiz ";
    char t2[] = "Hakan";

    printf("strcat : %s\n", strcat(t1, t2));
}

