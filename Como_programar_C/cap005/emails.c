#include <stdio.h>
#include <locale.h>

void emails(const char *emails[], int size);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const char *list[] = {
        "luiz@wp.com",
        "luiz2@wp.com",
        "luiz3@wp.com",
        "luiz4@wp.com",
        "luiz5@wp.com",
        "luiz6@wp.com",
        "luiz7@wp.com",
    };
    emails(list, sizeof(list) / sizeof(list[0]));
    return 0;
}

void emails(const char *emails[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Email enviado para %s\n", emails[i]);
    }
}
