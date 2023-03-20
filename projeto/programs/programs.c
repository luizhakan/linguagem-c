#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main()
{
    char command[1024];
    const char *urls[] = {
        "https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb",
        "https://dl.discordapp.net/apps/linux/0.0.25/discord-0.0.25.deb",
        "https://download.dbeaver.com/community/23.0.0/dbeaver-ce_23.0.0_amd64.deb",
        "https://az764295.vo.msecnd.net/stable/ee2b180d582a7f601fa6ecfdad8d9fd269ab1884/code_1.76.2-1678817801_amd64.deb"};
    const char *filenames[] = {
        "google-chrome.deb", "discord-0.0.25.deb", "dbeaver-ce_23.0.0_amd64.deb", "code_1.76.2-1678817801_amd64.deb"};

    // Mensagem na tela dizendo qual a versão que está baixando
    for (int i = 0; i < sizeof(filenames)/sizeof(filenames[0]); i++)
    {
        printf("Downloading %s...\n", filenames[i]);
        sprintf(command, "wget -q -O %s %s", filenames[i], urls[i]);
        system(command);
        printf("Arquivo baixado!\n");
    }

    // Constrói o comando dpkg para instalar o pacote
    for (int i = 0; i < sizeof(filenames)/sizeof(filenames[0]); i++)
    {
        printf("Installing %s...\n", filenames[i]);
        sprintf(command, "sudo dpkg -i %s && sudo apt install -f", filenames[i]);
        system(command);
    }

    // Atualizando via repositório
    printf("Atualizando via repositório...");
    sprintf(command, "sudo apt update && sudo apt upgrade discord dbeaver google-chrome-stable code -y");
    int result = system(command);
    if (result != 0)
    {
        fprintf(stderr, "Failed to update.\n");
        return 1;
    }
    printf("OK\n");

    printf("Package installed successfully.\n");

    // deletar os arquivos
    for (int i = 0; i < sizeof(filenames)/sizeof(filenames[0]); i++)
    {
        snprintf(command, sizeof(command), "rm '%s'", filenames[i]);
        printf("Deleting %s...\n", filenames[i]);
        system(command);
    }

    return 0;
}
