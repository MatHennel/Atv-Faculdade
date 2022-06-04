#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;
    int lin,cont;

    fp = fopen("aula.txt", "a+");

    if (fp == NULL)
    {
        printf("[ERRO] Nao foi possivel abrir o arquivo!\n");
        return 0;
    }
    printf("\nDigite a linha: ");
    scanf("%i",&lin);

    cont = 1;

    do
    {
        c = fgetc(fp);

        if(c == '\n')
        {
            cont++;
        }
        if(cont == lin && c != EOF)
        {
            printf("%c", c);
        }
        
    } while (c != EOF);

        fclose(fp);
    return 0;
}