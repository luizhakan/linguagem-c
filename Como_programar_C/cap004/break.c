/*usando break em uma estrutura for*/
#include <stdio.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL, "Portuguese");
int x;
for(x =1; x <=10; x++){
    if(x == 5){
        break; // sai do loop somente se x for igual a 5
    }
    printf("%d\n", x);
}
printf("Saiu do loop em x == %d\n", x);
}