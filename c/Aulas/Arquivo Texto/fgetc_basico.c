#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;
    int a;

    fp = fopen("aula.txt", "a+");

    if (fp == NULL)
    {
        printf("[ERRO] Nao foi possivel abrir o arquivo!");
        return 0;
    }

    c = fgetc(fp);
    printf("%c",c);

    fclose(fp);
    return 0;
}