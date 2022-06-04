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
        printf("[ERRO] Nao foi possivel abrir o arquivo!\n");
        return 0;
    }
    printf("\n");
    do
    {
        c = fgetc(fp);
        if(c != EOF)
        {
            printf("%c", c);
        }
        
    } while (c != EOF);

        fclose(fp);
    return 0;
}