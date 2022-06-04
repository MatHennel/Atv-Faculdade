#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[50];
    

    fp = fopen("aula.txt", "a+");

    if (fp == NULL)
    {
        printf("[ERRO] Nao foi possivel abrir o arquivo!");
        return 0;
    }

    fputs("aula fpts basico\n",fp);
   

    fclose(fp);
    return 0;
}